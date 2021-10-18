#ifndef SOLDIERSTORE_H
#define SOLDIERSTORE_H
#include <iostream>
#include "SoldierMomento.h"
#include "Soldier.h"
using namespace std;

class SoldierStore{
     private:
        SoldierMomento* _sMomento;
    public:
        void store(SoldierMomento* sM);
        SoldierMomento* getMomento();
        ~SoldierStore();
};
#endif