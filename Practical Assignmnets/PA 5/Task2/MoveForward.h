#ifndef MOVEFORWARD_H
#define MOVEFORWARD_H

#include "Command.h"
#include <iostream>

using namespace std;

class MoveForward : public Command
{

public:
    MoveForward();
    ~MoveForward();
    void execute();
    void undo();

private:
};

#endif
