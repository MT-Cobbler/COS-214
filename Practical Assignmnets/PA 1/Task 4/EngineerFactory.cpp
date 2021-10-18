#include "EngineerFactory.h"
EngineerFactory::EngineerFactory(){
}
EngineerFactory::~EngineerFactory(){
}
Soldier* EngineerFactory::createSoldier(string n){
    Soldier* newE = new Engineer(n);
    return newE;
}
