#ifndef BARRIER_H
#define BARRIER_H
#include <iostream>
#include "Decorator.h"
using namespace std;

class Barrier : public Decorator{
    public:
        Barrier();
        ~Barrier();
        void print();
};
#endif

