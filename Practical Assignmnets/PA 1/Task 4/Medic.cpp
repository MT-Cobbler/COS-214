#include "Medic.h"

Medic::Medic() : Soldier()
{
}
Medic::Medic(string n){
    setName(n);
    setHealth(8);
    setPrimary("Syringe");
    setDamage(2);
}
Medic::~Medic()
{
}
bool Medic::hitZombie(Zombie* z){
    cout << "Medic " << this->getName() << " frantically stabs at the zombie with a " << this->getPrimaryW() << endl;
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
void Medic::celebrate(){
    cout << this->getName() << " sighs in relief" << endl;
}
bool Medic::getHit(Zombie *z){
    int zDamage = z->getDamage();
    this->setHealth(this->getHealth() - zDamage);
    if(this->getHealth() > 0){
        cout << this->getName() << " gives humself painkillers to numb the " << zDamage << " damage suffered." << endl;
        return false;
    }
    else{
        return true;
    }
}
void Medic::die(){
    cout << "After saving so many lives, " << this->getName() << " could not save himself." << endl;
}
