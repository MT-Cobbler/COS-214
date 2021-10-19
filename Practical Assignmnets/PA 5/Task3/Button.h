#ifndef BUTTON_H
#define BUTTON_H

#include "Command.h"
#include <iostream>

using namespace std;

class Button
{

public:
    Button(Command *c);
    ~Button();
    void press();

private:
    Command *command;
};
#endif
