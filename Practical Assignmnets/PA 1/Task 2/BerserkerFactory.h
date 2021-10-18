#ifndef BERSERKERFACTORY_H
#define BERSERKERFACTORY_H
#include "SoldierFactory.h"
#include <iostream>

using namespace std;

class BerserkerFactory : public SoldierFactory
{
private:
    /* data */
public:
    BerserkerFactory(/* args */);
    ~BerserkerFactory();
    Soldier* createSoldier(string n);
};
#endif
