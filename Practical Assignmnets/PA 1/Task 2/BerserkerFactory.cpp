#include "BerserkerFactory.h"
#include "Berserker.h"

BerserkerFactory::BerserkerFactory(){
    cout << "Berserker Factory Operating" << endl;
}
BerserkerFactory::~BerserkerFactory(){
    delete this;
}
Soldier* BerserkerFactory::createSoldier(string n){
    // must create a new soldier with the name
    Soldier* newB = new Berserker(n);
    return newB;
}
