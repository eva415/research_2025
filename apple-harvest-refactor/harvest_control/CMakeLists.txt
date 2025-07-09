cmake_minimum_required(VERSION 3.8)
project(harvest_control)

# compiler warnings
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(trajectory_msgs REQUIRED)
find_package(controller_manager_msgs REQUIRED)
find_package(harvest_interfaces REQUIRED)

# --- MoveIt interfaces (all planning-interface libs) ---
find_package(moveit_ros_planning_interface REQUIRED)

# --- C++ executable ---
add_executable(move_arm src/move_arm.cpp)

target_compile_features(move_arm PUBLIC cxx_std_17)

ament_target_dependencies(move_arm
  rclcpp
  std_msgs
  std_srvs
  geometry_msgs
  trajectory_msgs
  controller_manager_msgs
  harvest_interfaces
  moveit_ros_planning_interface
)

install(TARGETS move_arm
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

# --- Python scripts ---
find_package(ament_cmake_python REQUIRED)
ament_python_install_package(${PROJECT_NAME})
install(
  PROGRAMS
    scripts/coordinate_to_trajectory.py
    scripts/event_detector.py
    # …etc…
  DESTINATION lib/${PROJECT_NAME}
)

# --- Launch & resources ---
install(DIRECTORY launch/ resource/
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
