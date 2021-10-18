#ifndef STARTLINE_H
#define STARTLINE_H

#include <iostream>
#include "Decorator.h"
using namespace std;

class Startline : public Decorator{
    public:
        Startline();
        ~Startline();
        void print();
};
#endif
