#include "EngineerFactory.h"
#include "Engineer.h"
EngineerFactory::EngineerFactory(){
    cout << "Engineer Factory Operating" << endl;
}
EngineerFactory::~EngineerFactory(){
    delete this;
}
Soldier* EngineerFactory::createSoldier(string n){
    // must create a new soldier with the name
    Soldier* newE = new Engineer(n);
    return newE;
}
