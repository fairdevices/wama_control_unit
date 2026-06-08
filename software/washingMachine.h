#pragma once

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
