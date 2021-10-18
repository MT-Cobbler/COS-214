#ifndef SNIPERFACTORY_H
#define SNIPERFACTORY_H
#include "SoldierFactory.h"
#include <iostream>

using namespace std;

class SniperFactory : public SoldierFactory
{
private:
    /* data */
public:
    SniperFactory(/* args */);
    ~SniperFactory();
    Soldier* createSoldier(string n);
};
#endif

