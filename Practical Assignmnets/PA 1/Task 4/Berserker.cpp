#include "Berserker.h"

Berserker::Berserker() : Soldier()
{
}
Berserker::Berserker::Berserker(string n){
    setName(n);
    setHealth(10);
    setPrimary("Big Chainsaw");
    setDamage(4);
    
}
Berserker::~Berserker()
{
}
bool Berserker::hitZombie(Zombie* z){
    cout << "Berserker " << this->getName() << " swings a " << this->getPrimaryW() << " at the zombie's head." << endl;
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
void Berserker::celebrate(){
    cout << this->getName() << " slices the zombie in half! " << endl;
}
bool Berserker::getHit(Zombie *z){
    int zDamage = z->getDamage();
    this->setHealth(this->getHealth() - zDamage);
    if(this->getHealth() > 0){
        cout << this->getName() << " pretends not to notice the " << zDamage << " damage he takes." << endl;
        return false;
    }
    else{
        return true;
    }
}
void Berserker::die(){
    cout << this->getName() << "Nobody really liked " << this->getName() << "'" << " company anyways" << endl;
}
