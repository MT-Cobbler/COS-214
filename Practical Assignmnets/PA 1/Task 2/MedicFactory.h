#ifndef MEDICFACTORY_H
#define MEDICFACTORY_H
#include "SoldierFactory.h"
#include <iostream>

using namespace std;

class MedicFactory : public SoldierFactory
{
private:
    /* data */
public:
    MedicFactory(/* args */);
    ~MedicFactory();
    Soldier* createSoldier(string n);
};
#endif

