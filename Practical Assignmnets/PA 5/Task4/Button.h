#ifndef BUTTON_H
#define BUTTON_H

#include "Command.h"

#include <iostream>

using namespace std;

class Button
{
private:
    Command *command;
    
public:
    Button(Command *c);
    ~Button();
    void press();
};
#endif
