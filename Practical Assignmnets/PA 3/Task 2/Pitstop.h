#ifndef PITSTOP_H
#define PITSTOP_H

#include <iostream>
#include "Decorator.h"
using namespace std;

class Pitstop : public Decorator{
    public:
        Pitstop();
        ~Pitstop();
        void print();
};
#endif
