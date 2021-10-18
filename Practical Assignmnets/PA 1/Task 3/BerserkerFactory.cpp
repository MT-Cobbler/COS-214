#include "BerserkerFactory.h"
BerserkerFactory::BerserkerFactory(){
}
BerserkerFactory::~BerserkerFactory(){
}
Soldier* BerserkerFactory::createSoldier(string n){
    Soldier* newB = new Berserker(n);
    return newB;
}
