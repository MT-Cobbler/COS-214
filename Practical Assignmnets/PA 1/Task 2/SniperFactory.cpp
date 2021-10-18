#include "SniperFactory.h"
#include "Sniper.h"
SniperFactory::SniperFactory(){
    cout << "Sniper Factory Operating" << endl;
}
SniperFactory::~SniperFactory(){
    delete this;
}
Soldier* SniperFactory::createSoldier(string n){
    // must create a new soldier with the name
    Soldier* newS = new Sniper(n);
    return newS;
};

