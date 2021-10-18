#ifndef ZOMBIEMOMENTO_H
#define ZOMBIEMOMENTO_H
#include "ZombieState.h"
#include <iostream>
using namespace std;

class ZombieMomento
{
private:
    /* data */
    ZombieState* _state;
    friend class Zombie;
    ZombieMomento(string, int, int);
public:
    ZombieMomento(/* args */);
    virtual ~ZombieMomento();
    void setState(ZombieState* s);
    ZombieState* getState();
};
#endif
