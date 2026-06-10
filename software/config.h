#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>
#include <IPAddress.h>

// Access point configuration
const char AP_SSID[] = "UCB";
const char AP_PASSWORD[] = "12345678";

const IPAddress LOCAL_IP(192, 168, 4, 1);
const IPAddress GATEWAY(192, 168, 4, 1);
const IPAddress SUBNET(255, 255, 255, 0);

// Web server configuration
constexpr uint16_t WEB_SERVER_PORT = 80;

#endif
