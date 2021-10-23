#ifndef FLY_H
#define FLY_H

#include "Command.h"

#include <iostream>

using namespace std;

class Fly : public Command
{
public:
    Fly();
    ~Fly();
    void execute();
    void undo();
};
#endif
