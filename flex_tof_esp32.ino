#include <micro_ros_arduino.h>
#include <rcl/rcl.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <std_msgs/msg/int32.h>
#include <std_msgs/msg/float32_multi_array.h>

#include <Wire.h>
#include "Adafruit_VL53L0X.h"

// ==== Flex Sensor Config ====
const int FLEX_PINS[4] = {34, 35, 32, 33};
const float VCC = 3.30;
const float R_DIV = 100000.0;
const float BEND_RESISTANCE = 60000.0;
const int BIAS_SAMPLES = 50;
const int SMOOTH_SAMPLES = 1;

float straightResistance[4];

// ==== ToF Sensor ====
Adafruit_VL53L0X lox = Adafruit_VL53L0X();

// ==== micro-ROS ====
rcl_publisher_t flex_pub;
rcl_publisher_t tof_pub;

std_msgs__msg__Float32MultiArray flex_msg;
std_msgs__msg__Int32 tof_msg;

rclc_support_t support;
rcl_node_t node;
rcl_timer_t timer;
rclc_executor_t executor;
rcl_allocator_t allocator;

float flex_data[4];

// ==== Timer Callback ====
void timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  (void) last_call_time;
  if (timer == NULL) return;

  // --- ToF Distance ---
  if (lox.isRangeComplete()) {
    uint16_t distance = lox.readRangeResult();
    if (distance > 0 && distance < 2000) {
      tof_msg.data = distance;
      rcl_publish(&tof_pub, &tof_msg, NULL);
    }
  }

  // --- Flex Angles ---
  for (int i = 0; i < 4; i++) {
    float sum = 0;
    for (int j = 0; j < SMOOTH_SAMPLES; j++) {
      sum += analogRead(FLEX_PINS[i]);
    }
    float avgADC = sum / SMOOTH_SAMPLES;
    float flexV = avgADC * VCC / 4095.0;
    if (flexV < 0.01) flexV = 0.01;

    float flexR = R_DIV * (VCC / flexV - 1.0);
    float angle = 90.0 * (flexR - straightResistance[i]) / (BEND_RESISTANCE - straightResistance[i]);
    flex_data[i] = constrain(angle, 0, 90);
  }

  flex_msg.data.data = flex_data;
  flex_msg.data.size = 4;
  flex_msg.data.capacity = 4;
  rcl_publish(&flex_pub, &flex_msg, NULL);
}

bool create_entities()
{
  allocator = rcl_get_default_allocator();
  rclc_support_init(&support, 0, NULL, &allocator);
  rclc_node_init_default(&node, "esp32_sensor_node", "", &support);

  rclc_publisher_init_default(
    &flex_pub,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Float32MultiArray),
    "flex_sensor_data");

  rclc_publisher_init_default(
    &tof_pub,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
    "tof_sensor_data");

  rclc_timer_init_default(&timer, &support, RCL_MS_TO_NS(0), timer_callback);

  executor = rclc_executor_get_zero_initialized_executor();
  rclc_executor_init(&executor, &support.context, 1, &allocator);
  rclc_executor_add_timer(&executor, &timer);

  return true;
}

void setup() {
  set_microros_transports();
  Wire.begin(21, 22);
  Serial.begin(115200);

  // Calibrate flex sensors
  for (int i = 0; i < 4; i++) {
    pinMode(FLEX_PINS[i], INPUT);
    float sum = 0;
    for (int j = 0; j < BIAS_SAMPLES; j++) {
      sum += analogRead(FLEX_PINS[i]);
      delay(5);
    }
    float biasADC = sum / BIAS_SAMPLES;
    float flexV = biasADC * VCC / 4095.0;
    straightResistance[i] = R_DIV * (VCC / flexV - 1.0);
  }

  // Init ToF
  if (!lox.begin(0x29)) {
    Serial.println("Failed to boot VL53L0X");
    while (1);
  }
  lox.startRangeContinuous(10);
  lox.setMeasurementTimingBudgetMicroSeconds(2000);

  create_entities();
}

void loop() {
  rclc_executor_spin_some(&executor, RCL_MS_TO_NS(0));
}
