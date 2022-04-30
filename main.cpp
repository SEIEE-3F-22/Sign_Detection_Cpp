#include <stdio.h>
#include <string>
#include "inference_engine.hpp"

using namespace InferenceEngine;

#define LOGD(fmt, ...) printf("[%s][%s][%d]: " fmt "\n", __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)

int main(int argc, char *argv[]) {
    // 1.查看版本号信息
    const Version *version = GetInferenceEngineVersion();
    LOGD("version description: %s, buildNumber: %s, major.minor: %d.%d",
         version->description, version->buildNumber, version->apiVersion.major, version->apiVersion.minor);

    // 2.创建推理引擎
    Core ie;
    std::vector<std::string> devices = ie.GetAvailableDevices(); // 查看可使用的Devices，包含 CPU、GPU 等
    for (std::string device : devices) {
        LOGD("GetAvailableDevices: %s", device.c_str());
    }

    return 0;
}