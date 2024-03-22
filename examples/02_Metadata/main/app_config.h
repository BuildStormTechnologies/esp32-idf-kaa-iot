/**
 * \copyright Copyright (c) 2021-2024, Buildstorm Pvt Ltd
 *
 * \file app_config.h
 * \brief app_config header file.
 *
 * The app_config Contains macros for the application.
 *
 */

#ifndef _APP_CONFIG_H_
#define _APP_CONFIG_H_

#include <stdbool.h>
#include <stdint.h>

#include "stdbool.h"
#include "stdint.h"
#include "lib_config.h"

#define APP_MODULE_MAIN LIB_MODULE_MAX

//-------------------------APP CONFIG--------------------------/
#define TASK_APP_PRIORITY 4
#define TASK_APP_STACK_SIZE (4 * 1024) // reduce it to 4096

#define APP_VERSION "1.0.0"

#define TEST_WIFI_SSID "YOUR WIFI SSID"
#define TEST_WIFI_PASSWORD "YOUR PASSWORD"

#define KAA_URI "mqtt://mqtt.cloud.kaaiot.com"
#define KAA_PORT 1883

#define KAA_APPLICATION_VERSION "Your Device Application Version"
#define KAA_ENDPOINT_TOKEN "Your Device Endpoint Token"

#define LED_PIN 2

#endif
