
if(NOT "/home/openark/ros2_ws/build/point_one_gps_driver/p1_fusion_engine_client/src/project_p1_fusion_engine_client-stamp/project_p1_fusion_engine_client-gitinfo.txt" IS_NEWER_THAN "/home/openark/ros2_ws/build/point_one_gps_driver/p1_fusion_engine_client/src/project_p1_fusion_engine_client-stamp/project_p1_fusion_engine_client-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/home/openark/ros2_ws/build/point_one_gps_driver/p1_fusion_engine_client/src/project_p1_fusion_engine_client-stamp/project_p1_fusion_engine_client-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E remove_directory "/home/openark/ros2_ws/build/point_one_gps_driver/p1_fusion_engine_client/src/project_p1_fusion_engine_client"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/openark/ros2_ws/build/point_one_gps_driver/p1_fusion_engine_client/src/project_p1_fusion_engine_client'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout "https://github.com/PointOneNav/fusion-engine-client.git" "project_p1_fusion_engine_client"
    WORKING_DIRECTORY "/home/openark/ros2_ws/build/point_one_gps_driver/p1_fusion_engine_client/src"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/PointOneNav/fusion-engine-client.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout master --
  WORKING_DIRECTORY "/home/openark/ros2_ws/build/point_one_gps_driver/p1_fusion_engine_client/src/project_p1_fusion_engine_client"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'master'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/home/openark/ros2_ws/build/point_one_gps_driver/p1_fusion_engine_client/src/project_p1_fusion_engine_client"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/openark/ros2_ws/build/point_one_gps_driver/p1_fusion_engine_client/src/project_p1_fusion_engine_client'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/home/openark/ros2_ws/build/point_one_gps_driver/p1_fusion_engine_client/src/project_p1_fusion_engine_client-stamp/project_p1_fusion_engine_client-gitinfo.txt"
    "/home/openark/ros2_ws/build/point_one_gps_driver/p1_fusion_engine_client/src/project_p1_fusion_engine_client-stamp/project_p1_fusion_engine_client-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/openark/ros2_ws/build/point_one_gps_driver/p1_fusion_engine_client/src/project_p1_fusion_engine_client-stamp/project_p1_fusion_engine_client-gitclone-lastrun.txt'")
endif()

