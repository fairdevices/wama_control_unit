#include <ESP8266WiFi.h>
#include "webserver.h"

const char* ap_ssid = "UCB";
const char* ap_password = "12345678";

IPAddress local_IP(192, 168, 4, 1);
IPAddress gateway(192, 168, 4, 1);
IPAddress subnet(255, 255, 255, 0);

void setup() {
  Serial.begin(115200);
  delay(500);

  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(local_IP, gateway, subnet);
  WiFi.softAP(ap_ssid, ap_password);

  initWebServer();
}

void loop() {
  handleWebServer();
}
