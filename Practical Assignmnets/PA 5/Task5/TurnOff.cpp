#include "TurnOff.h"

TurnOff::TurnOff()
{
}

TurnOff::~TurnOff()
{
}

void TurnOff::execute()
{
    getReceiver()->off();
}

void TurnOff::undo()
{
    getReceiver()->on();
}