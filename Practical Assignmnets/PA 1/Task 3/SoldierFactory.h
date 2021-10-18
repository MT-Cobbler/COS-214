#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H
#include "Soldier.h"
#include "Berserker.h"
#include "Engineer.h"
#include "Medic.h"
#include "Sniper.h"
#include <iostream>
using namespace std;

class SoldierFactory
{
private:
    /* data */
public:
    SoldierFactory(/* args */);
    virtual ~SoldierFactory();
    virtual Soldier* createSoldier(string) = 0;
};
#endif

