#include "SoldierFactory.h"
SoldierFactory::SoldierFactory(/* args */)
{
   cout << "Soldier Factory is running" << endl;
}

SoldierFactory::~SoldierFactory()
{
    delete this;
}

