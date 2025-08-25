cmake_minimum_required(VERSION 3.8)
project(tiago_behavior_tree)

# Compiler flags
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# ------------------------------------------------------------------------------
# Dependencies
# ------------------------------------------------------------------------------
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(behaviortree_cpp_v3 REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(nav2_behavior_tree REQUIRED)
find_package(geometry_msgs REQUIRED)

# ------------------------------------------------------------------------------
# Action definition (OpenGripper.action)
# ------------------------------------------------------------------------------
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "action/OpenGripper.action"
  "action/ApproachObject.action"
  DEPENDENCIES builtin_interfaces geometry_msgs
)



ament_export_dependencies(rosidl_default_runtime)

# ------------------------------------------------------------------------------
# Include directories
# ------------------------------------------------------------------------------
include_directories(
  include  # This is enough if your headers are in include/tiago_behavior_tree/...
)

# ------------------------------------------------------------------------------
# Build plugin library
# ------------------------------------------------------------------------------
add_library(pick_action_node SHARED
  src/pick_action.cpp
)

# Link dependencies to the plugin
ament_target_dependencies(pick_action_node
  rclcpp
  tf2_ros
  behaviortree_cpp_v3
  nav2_behavior_tree
  moveit_ros_planning_interface
  geometry_msgs
)

# Make sure it can see the generated action symbols
rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(pick_action_node ${cpp_typesupport_target})


# ------------------------------------------------------------------------------
# Plugin export
# ------------------------------------------------------------------------------
pluginlib_export_plugin_description_file(nav2_behavior_tree pick_plugin.xml)


add_executable(open_gripper_server src/open_gripper_action_server.cpp)
ament_target_dependencies(open_gripper_server
  rclcpp
  rclcpp_action

)

rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(open_gripper_server ${cpp_typesupport_target})

install(TARGETS
  open_gripper_server
  DESTINATION lib/${PROJECT_NAME})
# ------------------------------------------------------------------------------
# Install
# ------------------------------------------------------------------------------
# Headers
install(DIRECTORY include/
  DESTINATION include
)

# Plugin library
install(TARGETS pick_action_node
  DESTINATION lib
)

install(FILES pick_plugin.xml
  DESTINATION share/${PROJECT_NAME}
  )

# ------------------------------------------------------------------------------
# Linting (optional)
# ------------------------------------------------------------------------------
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

# ------------------------------------------------------------------------------
# Package export
# ------------------------------------------------------------------------------
ament_package()
