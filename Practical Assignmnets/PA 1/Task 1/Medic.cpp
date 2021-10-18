#include "Medic.h"

Medic::Medic() : Soldier()
{
    name = "Medic";
    hp = 100;
    pw = sw = "";
    cout << "Medic" << endl;
}
Medic::Medic(string n){
    this->name = n;
    hp = 100;
    pw = sw = "";
    cout << "Medic" << endl;
}
Medic::~Medic()
{
    delete this;
}

bool Medic::hitZombie(Zombie* z){
    cout << this->name << " fires a " << this->pw << " at a zombie." << endl;
    if(z->getHealth() > 0){
        // if the zombie is still alive
        if(z->takeDamage(5) > 0){
            // still alive
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
    // zombie dies
    cout << this->name << " exclaims headshot! " << endl;
}
bool Medic::getHit(Zombie *z){
    int damage = z->getDamage();
    this->hp -= damage;
    if(this->hp > 0){
        cout << this->name << " gives humself painkillers to numb the " << damage << " damage suffered." << endl;
        return false;
    }
    else{
        return true;
    }
}
void Medic::die(){
    cout << "After saving so many lives, " << this->name << " could not save himself." << endl;
}
string Medic::getName(){
    return this->name;
}
int Medic::getHealth(){
    return this->hp;
}
string Medic::getPrimaryW(){
    return this->pw;
}
string Medic::getSecondaryW(){
    return this->sw;
}