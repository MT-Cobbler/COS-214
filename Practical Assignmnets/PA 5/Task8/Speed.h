#ifndef SPEED_H
#define SPEED_H

#include "Command.h"

#include <iostream>

using namespace std;

class Speed : public Command
{
public:
    Speed();
    ~Speed();
    void execute();
    void undo();
};
#endif
