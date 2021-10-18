#ifndef ENGINEERFACTORY_H
#define ENGINEERFACTORY_H
#include "SoldierFactory.h"
#include <iostream>

using namespace std;

class EngineerFactory : public SoldierFactory
{
private:
    /* data */
public:
    EngineerFactory(/* args */);
    ~EngineerFactory();
    Soldier* createSoldier(string n);
};
#endif

