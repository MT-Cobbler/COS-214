#ifndef MOVEBACKWARD_H
#define MOVEBACKWARD_H

#include "Command.h"
#include <iostream>

using namespace std;

class MoveBackward : public Command
{

public:
    MoveBackward();
    ~MoveBackward();
    void execute();
    void undo();

private:
};
#endif
