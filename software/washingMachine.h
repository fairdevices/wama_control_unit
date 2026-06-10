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

#endif#pragma once

struct WashingMachineState
{
    bool power;

    String program;
    String temperature;
    String spinningSpeed;

    bool prewash;
    bool extraRinse;
};

extern WashingMachineState machine;

void powerOn();
void powerOff();

void setProgram(String value);
void setTemperature(String value);
void setSpinningSpeed(String value);

void setPrewash(bool value);
void setExtraRinse(bool value);
