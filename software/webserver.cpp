#include "webserver.h"

#include <ESP8266WebServer.h>
#include "config.h"
#include "ui.h"
#include "washingMachine.h"

namespace {
ESP8266WebServer server(WEB_SERVER_PORT);

void sendPage() {
  server.setContentLength(CONTENT_LENGTH_UNKNOWN);
  server.send(200, "text/html", "");
  server.sendContent_P(pageTop);
  server.sendContent_P(logoSvg);
  server.sendContent_P(pageBottom);
}

void sendState() {
  server.send(200, "application/json", washingMachineStateJson());
}

void handlePowerOn() {
  setPower(true);
  sendState();
}

void handlePowerOff() {
  setPower(false);
  sendState();
}
}  // namespace

void initWebServer() {
  server.on("/", HTTP_GET, sendPage);
  server.on("/api/state", HTTP_GET, sendState);
  server.on("/api/power/on", HTTP_POST, handlePowerOn);
  server.on("/api/power/off", HTTP_POST, handlePowerOff);

  server.begin();
  Serial.println("Webserver gestartet");
}

void handleWebServerClient() {
  server.handleClient();
}
