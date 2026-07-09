#ifndef WASHING_MACHINE_H
#define WASHING_MACHINE_H

#include <Arduino.h>

struct WashingMachineState {
  bool powerOn;
  bool prewash;
  bool extraRinsing;
  String program;
  String temperature;
  String spinningSpeed;
};

void washingMachineInit();
void setPower(bool enabled);
bool isPowerOn();

WashingMachineState getWashingMachineState();
void setWashingMachineState(const WashingMachineState& newState);
String washingMachineStateJson();

#endif
