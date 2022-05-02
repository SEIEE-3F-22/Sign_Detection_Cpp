cmake_minimum_required(VERSION 3.16)
project(OpenVINO_Test)

set(CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})
set(CMAKE_CXX_FLAGS "-march=armv7-a")

set(INTEL_OPENVINO_DIR "/opt/intel/openvino_2021")
set(INTEL_CVSDK_DIR "/opt/intel/openvino_2021")

find_package(OpenCV REQUIRED)
find_package(InferenceEngine REQUIRED)
find_package(ngraph REQUIRED)

include_directories(
        ${OpenCV_INCLUDE_DIRS}
)

#add_executable(test main.cpp)
add_executable(test2 yolox_inference.cpp)


target_link_libraries(
        test2
        ${InferenceEngine_LIBRARIES}
        ${NGRAPH_LIBRARIES}
        ${OpenCV_LIBS}
)