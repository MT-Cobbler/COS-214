#include "SniperFactory.h"
SniperFactory::SniperFactory(){
}
SniperFactory::~SniperFactory() {
}
Soldier* SniperFactory::createSoldier(string n){
    Soldier* sniper = new Sniper(n);
    return sniper;
};

