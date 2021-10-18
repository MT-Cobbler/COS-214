#ifndef GRAVELTRAP_H
#define GRAVELTRAP_H

#include <iostream>
#include "Decorator.h"
using namespace std;

class GravelTrap : public Decorator{
    public:
        GravelTrap();
        ~GravelTrap();
        void print();
};
#endif
