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

void powerOn() {
  setPower(true);
  sendState();
}

void powerOff() {
  setPower(false);
  sendState();
}
}

void initWebServer() {
  server.on("/", HTTP_GET, sendPage);
  server.on("/api/state", HTTP_GET, sendState);
  server.on("/api/power/on", HTTP_POST, powerOn);
  server.on("/api/power/off", HTTP_POST, powerOff);

  server.begin();
  Serial.println("Webserver gestartet");
}

void handleWebServerClient() {
  server.handleClient();
}
