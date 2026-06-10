#include "washingMachine.h"

namespace {
WashingMachineState state;
}

void washingMachineInit() {
  state.powerOn = false;
  state.prewash = false;
  state.extraRinsing = false;
  state.program = "";
  state.temperature = "";
  state.spinningSpeed = "";
}

void setPower(bool enabled) {
  state.powerOn = enabled;
}

bool isPowerOn() {
  return state.powerOn;
}

WashingMachineState getWashingMachineState() {
  return state;
}

void setWashingMachineState(const WashingMachineState& newState) {
  state = newState;
}

String washingMachineStateJson() {
  String json = "{";
  json += "\"powerOn\":" + String(state.powerOn ? "true" : "false") + ",";
  json += "\"prewash\":" + String(state.prewash ? "true" : "false") + ",";
  json += "\"extraRinsing\":" + String(state.extraRinsing ? "true" : "false") + ",";
  json += "\"program\":\"" + state.program + "\",";
  json += "\"temperature\":\"" + state.temperature + "\",";
  json += "\"spinningSpeed\":\"" + state.spinningSpeed + "\"";
  json += "}";
  return json;
}
