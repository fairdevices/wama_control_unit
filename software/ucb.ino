#include "washingMachine.h"
#include "webserver.h"
#include "wifi.h"

void setup() {
  Serial.begin(115200);
  delay(500);

  washingMachineInit();
  setupAccessPoint();
  initWebServer();
}

void loop() {
  handleWebServerClient();
}
