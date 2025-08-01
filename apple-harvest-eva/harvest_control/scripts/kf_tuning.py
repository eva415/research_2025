#!/usr/bin/env python3
"""
ROS2 node to auto-tune diagonal Q/R of the 2D Kalman filter by
subscribing to live flex-sensor data.

- Collects scaled measurements from '/flex_sensor_data'.
- Automatically runs the optimizer once sufficient samples are collected.
- Matches per-dimension innovation variances rather than trace.
- Prints out recommended diagonal Q and R values in ROS logs.

Dependencies: rclpy, numpy, scipy
Install with:
    pip install rclpy numpy scipy

Usage:
    ros2 run <your_package> kf_tuner_node
"""
import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import ParameterDescriptor
from std_msgs.msg import Float32MultiArray
import numpy as np
from scipy.optimize import minimize


def kalman_innovations(Z, A, H, Q, R):
    n = A.shape[0]
    m, T = Z.shape
    x = np.zeros((n,1))
    P = np.eye(n)
    nu_all = np.zeros((m, T))

    for k in range(T):
        z = Z[:,k].reshape((m,1))
        x_p = A @ x
        P_p = A @ P @ A.T + Q
        S = H @ P_p @ H.T + R
        nu = (z - H @ x_p).flatten()
        nu_all[:, k] = nu
        K = P_p @ H.T @ np.linalg.inv(S)
        x = x_p + K @ nu.reshape((m,1))
        P = (np.eye(n) - K @ H) @ P_p

    # empirical variance per measurement dimension
    emp_var = np.var(nu_all, axis=1)
    # predicted variance per dim (diag of S averaged)
    # recompute S per step
    pred_var = []
    x = np.zeros((n,1)); P = np.eye(n)
    for k in range(T):
        P_p = A @ P @ A.T + Q
        S = H @ P_p @ H.T + R
        pred_var.append(np.diag(S))
        # dummy update to advance P
        P = P_p
    pred_var = np.mean(pred_var, axis=0)
    return emp_var, pred_var


def cost_fn(params, Z, A, H):
    n = A.shape[0]; m = H.shape[0]
    q = params[:n]; r = params[n:]
    Q = np.diag(q); R = np.diag(r)
    emp_var, pred_var = kalman_innovations(Z, A, H, Q, R)
    # match innovation variances per dimension
    return np.sum((emp_var - pred_var)**2)


class KFTunerNode(Node):
    def __init__(self):
        super().__init__('kf_tuner_node')
        # Declare parameters
        self.declare_parameter('scale', 4.0, ParameterDescriptor(description="Scaling factor for flex data"))
        self.declare_parameter('max_samples', 500, ParameterDescriptor(description="Samples to collect"))
        self.declare_parameter('max_iters', 200, ParameterDescriptor(description="Max optimizer iterations"))

        self.scale = self.get_parameter('scale').value
        self.max_samples = self.get_parameter('max_samples').value
        self.max_iters = self.get_parameter('max_iters').value
        self.data = []

        self.subscription = self.create_subscription(
            Float32MultiArray,
            '/flex_sensor_data',
            self.flex_callback,
            10
        )
        self.get_logger().info(f'KF Tuner Node started; collecting up to {self.max_samples} samples...')

    def flex_callback(self, msg: Float32MultiArray):
        vals = np.array(msg.data) / self.scale
        if vals.size == 4 and len(self.data) < self.max_samples:
            self.data.append(vals)
            count = len(self.data)
            if count % 100 == 0 or count == self.max_samples:
                self.get_logger().info(f'Collected {count}/{self.max_samples} samples')

        if len(self.data) == self.max_samples:
            self.subscription.destroy()
            self.run_optimizer()

    def run_optimizer(self):
        Z = np.array(self.data).T  # shape (4, T)
        n = 2
        A = np.eye(n)
        H = np.array([[1,0],[0,1],[-1,0],[0,-1]])

        # initial diagonal Q,R from data variance
        meas_var = np.var(Z, axis=1)
        x0 = np.hstack([0.5*np.ones(n), meas_var])
        bounds = [(1e-6, 10.0)] * len(x0)

        self.get_logger().info('Running Kalman tuning optimizer...')
        res = minimize(cost_fn, x0, args=(Z, A, H), bounds=bounds,
                       options={'maxiter': self.max_iters})

        q_opt = res.x[:n]
        r_opt = res.x[n:]

        self.get_logger().info('--- KF Tuning Results ---')
        self.get_logger().info(f'Q diag: [{q_opt[0]:.6f}, {q_opt[1]:.6f}]')
        self.get_logger().info('R diag: [%s]' % ', '.join(f'{v:.6f}' for v in r_opt))
        self.get_logger().info('Override FlexToFListener Q/R with these values.')


def main(args=None):
    rclpy.init(args=args)
    node = KFTunerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
