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
    this->hp = 8;
    this->pw = "Syringe"; 
    this->sw = "pistol";
    this->damage = 2; 
    cout << "Medic" << endl;
}
Medic::~Medic()
{
    delete this;
}

bool Medic::hitZombie(Zombie* z){
    cout << this->name << " fires a " << this->pw << " at a zombie." << endl;
    if(z->getHealth() > 0){
        if(z->takeDamage(5) > 0){
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
    cout << this->name << " exclaims headshot! " << endl;
}
bool Medic::getHit(Zombie *z){
    int zDamage = z->getDamage();
    this->hp -= zDamage;
    if(this->hp > 0){
        cout << this->name << " gives humself painkillers to numb the " << zDamage << " damage suffered." << endl;
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
int Medic::getDamage(){
    return this->damage;
}
string Medic::getPrimaryW(){
    return this->pw;
}
string Medic::getSecondaryW(){
    return this->sw;
}