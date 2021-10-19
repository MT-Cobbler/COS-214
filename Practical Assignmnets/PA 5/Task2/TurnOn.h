#ifndef TURNON_H
#define TURNON_H

#include "Command.h"
#include <iostream>

using namespace std;

class TurnOn : public Command
{

public:
    TurnOn();
    ~TurnOn();
    void execute();
    void undo();

private:
};

#endif
