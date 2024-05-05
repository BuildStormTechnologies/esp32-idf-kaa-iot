# ESP32 IDF KAA IoT Platform
The Buildstorm platform simplifies the integration of KAA IoT core features onto ESP32 Hardware, from basic IoT functionalities to advanced features like OTA updates.

The architecture is based on the core IDF APIs, complemented by a C++ wrapper tailored for application use, guaranteeing the non-blocking operation of all APIs. Each user action, including HTTP requests, MQTT publishing, Commands, and OTA, is logged as an event and seamlessly managed in the background. To maintain this seamless operation, the platform effectively runs a system task.

This establishes a robust foundation for your upcoming IoT project.

Supported features:

1. Telemetry
2. Metadata
3. Commands
4. OTA

## References
1. [KAA IoT Platform](https://buildstorm.com/solutions/esp32-kaa-iot-platform/)
2. [Exploring KAA IoT Commands](https://buildstorm.com/blog/kaa-iot-commands/)
3. [ESP32 OTA Updates with KAA IoT](https://buildstorm.com/blog/kaa-iot-ota-updates/)


## Requirements
1. This library uses esp-idf v5.2.0

---

---
## Example Setup
1. Update the following WiFi and KAA parameters in `app_config.h` of the example
2. This configuration will be same accross all examples

```
#define TEST_WIFI_SSID "YOUR WIFI SSID"
#define TEST_WIFI_PASSWORD "YOUR PASSWORD"

#define KAA_URI "mqtt://mqtt.cloud.kaaiot.com"
#define KAA_PORT 1883

#define KAA_APPLICATION_VERSION "Your Device Application Version"
#define KAA_ENDPOINT_TOKEN "Your Device Endpoint Token"
```

---

## Soc Compatibility

| Name     | OTA       | Ethernet W5500  |
| -------- | --------- | --------- |
| ESP32    | Supported | Supported |
| ESP32 S3 | Supported | Supported |
