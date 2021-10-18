#ifndef SOLDIERMOMENTO_H
#define SOLDIERMOMENTO_H
#include "SoldierState.h"
#include <iostream>
using namespace std;
class SoldierMomento
{
private:
    /* data */
    SoldierState* _state;
    friend class Soldier;
    SoldierMomento(string, int, string, int);
public:
    SoldierMomento();
    virtual ~SoldierMomento();
    void setState(SoldierState* s);
    SoldierState* getState();
};
#endif

