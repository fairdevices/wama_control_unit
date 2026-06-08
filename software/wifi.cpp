#include <ESP8266WiFi.h>
#include "config.h"
#include "wifi.h"

void initWifi()
{
    WiFi.mode(WIFI_AP);

    WiFi.softAPConfig(
        LOCAL_IP,
        GATEWAY,
        SUBNET
    );

    WiFi.softAP(
        AP_SSID,
        AP_PASSWORD
    );

    Serial.println();
    Serial.println("Access Point gestartet");
    Serial.print("IP-Adresse: ");
    Serial.println(WiFi.softAPIP());
}wifi.cpp
