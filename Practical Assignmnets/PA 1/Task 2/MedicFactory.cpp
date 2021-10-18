#include "MedicFactory.h"
#include "Medic.h"
MedicFactory::MedicFactory(){
    cout << "Medic Factory Operating" << endl;
}
MedicFactory::~MedicFactory(){
    delete this;
}
Soldier* MedicFactory::createSoldier(string n){
    // must create a new soldier with the name
    Soldier* newM = new Medic(n);
    return newM;
}
