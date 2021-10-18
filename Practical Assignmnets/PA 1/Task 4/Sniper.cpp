#include "Sniper.h"

Sniper::Sniper() : Soldier()
{
}
Sniper::Sniper(string n){
    setName(n);
    setHealth(6);
    setPrimary(".308 Rifle");
    setDamage(5);
}
Sniper::~Sniper()
{
}
bool Sniper::hitZombie(Zombie* z){
    cout << "Sniper " << this->getName() << " fires a " << this->getPrimaryW() << " at a zombie." << endl;
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
void Sniper::celebrate(){
    cout << this->getName() << " exclaims \"headshot!\" " << endl;
}
bool Sniper::getHit(Zombie *z){
    int zDamage = z->getDamage();
    this->setHealth(this->getHealth() - zDamage);
    if(this->getHealth() > 0){
        cout << this->getName() << " swears in 13 different languages as he takes " << zDamage << " damage." << endl;
        return false;
    }
    else{
        return true;
    }
}
void Sniper::die(){
    cout << this->getName() << " lead a good life. He will be missed." << endl;
    
}
