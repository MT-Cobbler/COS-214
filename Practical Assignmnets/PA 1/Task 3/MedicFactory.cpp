#include "MedicFactory.h"
MedicFactory::MedicFactory(){
}
MedicFactory::~MedicFactory(){
}
Soldier* MedicFactory::createSoldier(string n){
    Soldier* newM = new Medic(n);
    return newM;
}
