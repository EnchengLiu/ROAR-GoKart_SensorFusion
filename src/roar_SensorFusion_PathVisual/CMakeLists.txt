cmake_minimum_required(VERSION 3.5)
project(roar_SensorFusion_PathVisual)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)

add_executable(path_publisher_node src/roar_SensorFusion_PathVisual.cpp)
ament_target_dependencies(path_publisher_node rclcpp geometry_msgs nav_msgs)

install(TARGETS
  path_publisher_node
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()



ament_package()
