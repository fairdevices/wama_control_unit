#include <ESP8266WiFi.h>

#include "wifi.h"
#include "webserver.h"
#include "washingMachine.h"

void setup()
{
    Serial.begin(115200);

    delay(500);

    initWifi();

    initWebServer();
}

void loop()
{
    handleWebServer();
}
