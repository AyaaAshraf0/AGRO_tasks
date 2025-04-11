cmake_minimum_required(VERSION 3.8)
project(tiago_behavior_tree)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(behaviortree_cpp_v3 REQUIRED)
find_package(rclcpp REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(pluginlib REQUIRED)

include_directories(
  ${PROJECT_SOURCE_DIR}/include
)
# Add executable
add_library(pick_action_node SHARED src/pick_action.cpp)



# Specify dependencies
ament_target_dependencies(pick_action_node 
    rclcpp 
    moveit_ros_planning_interface 
    geometry_msgs 
    pluginlib
    behaviortree_cpp_v3  # Add BehaviorTreeCPP here
    
)

pluginlib_export_plugin_description_file(behaviortree_cpp_v3 pick_plugin.xml)

# Install target executable
install(TARGETS pick_action_node DESTINATION lib/${PROJECT_NAME})  



# Linting (optional, if testing is enabled)
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
