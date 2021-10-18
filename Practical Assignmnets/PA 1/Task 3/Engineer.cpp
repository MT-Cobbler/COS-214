#include "Engineer.h"

Engineer::Engineer() : Soldier()
{
}
Engineer::Engineer(string n){
    setName(n);
    setHealth(7);
    setPrimary("Wrench");
    setDamage(3);
}
Engineer::~Engineer()
{
}
bool Engineer::hitZombie(Zombie* z){
    cout << "Engineer " << this->getName() << " bludgeons the zombie with a " << this->getPrimaryW() << endl;
    if(z->getHealth() > 0){
        if(z->takeDamage(this->getDamage()) > 0){
            return false;
        }
        else{
            return true;
        }
    }
    else{
        return true;
    }
}
void Engineer::celebrate(){
    cout << this->getName() << " shakes his " << this->getPrimaryW() << " at the zombie's remains." << endl;
}
bool Engineer::getHit(Zombie *z){
   int zDamage = z->getDamage();
    this->setHealth(this->getHealth() - zDamage);
    if(this->getHealth() > 0){
        cout << this->getName() << " hides behind the nearest rock after taking " << zDamage << " damage." << endl;
        return false;
    }
    else{
        return true;
    }
}
void Engineer::die(){
    cout << this->getName() << " was eaten by a zombie." << endl;
}
