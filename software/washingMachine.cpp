#include "washingMachine.h"

WashingMachineState machine =
{
    false,
    "",
    "",
    "",
    false,
    false
};

void powerOn()
{
    machine.power = true;
}

void powerOff()
{
    machine.power = false;
}

void setProgram(String value)
{
    machine.program = value;
}

void setTemperature(String value)
{
    machine.temperature = value;
}

void setSpinningSpeed(String value)
{
    machine.spinningSpeed = value;
}

void setPrewash(bool value)
{
    machine.prewash = value;
}

void setExtraRinse(bool value)
{
    machine.extraRinse = value;
}
