#include "TurnOn.h"

TurnOn::TurnOn()
{
}

TurnOn::~TurnOn()
{
}

void TurnOn::execute()
{
    getReceiver()->on();
}

void TurnOn::undo()
{
    getReceiver()->off();
}