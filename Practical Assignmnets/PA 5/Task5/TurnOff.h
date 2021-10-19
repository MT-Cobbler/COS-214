#ifndef TURNOFF_H
#define TURNOFF_H

#include "Command.h"

#include <iostream>

using namespace std;

class TurnOff : public Command
{

public:
    TurnOff();
    ~TurnOff();
    void execute();
    void undo();
};

#endif
