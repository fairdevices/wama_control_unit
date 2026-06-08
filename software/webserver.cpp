#include <ESP8266WebServer.h>

#include "webserver.h"
#include "ui.h"
#include "washingMachine.h"

ESP8266WebServer server(80);

void handleRoot()
{
    server.setContentLength(CONTENT_LENGTH_UNKNOWN);

    server.send(
        200,
        "text/html",
        ""
    );

    server.sendContent_P(pageTop);
    server.sendContent_P(logoSvg);
    server.sendContent_P(pageBottom);
}

void handlePowerOn()
{
    powerOn();

    server.send(
        200,
        "text/plain",
        "OK"
    );
}

void handlePowerOff()
{
    powerOff();

    server.send(
        200,
        "text/plain",
        "OK"
    );
}

void initWebServer()
{
    server.on(
        "/",
        HTTP_GET,
        handleRoot
    );

    server.on(
        "/on",
        HTTP_GET,
        handlePowerOn
    );

    server.on(
        "/off",
        HTTP_GET,
        handlePowerOff
    );

    server.begin();

    Serial.println(
        "Webserver gestartet"
    );
}

void handleWebServer()
{
    server.handleClient();
}
