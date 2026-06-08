#include <ESP8266WebServer.h>
#include "ui.h"
#include "webserver.h"

ESP8266WebServer server(80);

void initWebServer() {
  server.on("/", HTTP_GET, []() {
    server.setContentLength(CONTENT_LENGTH_UNKNOWN);
    server.send(200, "text/html", "");
    server.sendContent_P(pageTop);
    server.sendContent_P(logoSvg);
    server.sendContent_P(pageBottom);
  });

  server.begin();
}

void handleWebServer() {
  server.handleClient();
}
