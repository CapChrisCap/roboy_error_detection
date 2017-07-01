PROJECT(roboy_error_detection C CXX)

CMAKE_MINIMUM_REQUIRED(VERSION 2.8.7)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O0 -g ")
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")

#==============================================================================
# Dependencies
#==============================================================================

# ros
find_package(catkin REQUIRED COMPONENTS roboy_system_notification roboy_communication_middleware roscpp std_msgs)
catkin_package( CATKIN_DEPENDS message_runtime roboy_system_notification roboy_communication_middleware INCLUDE_DIRS include)
include_directories(${catkin_INCLUDE_DIRS} )

INCLUDE_DIRECTORIES(
        include/
)

#==============================================================================
# Application
#==============================================================================
add_executable(roboy_error_detection src/main.cpp src/roboyErrorDetection.cpp)
target_link_libraries(roboy_error_detection ${catkin_LIBRARIES})
add_dependencies(roboy_error_detection roboy_system_notification_gencpp roboy_communication_middleware_genccp)