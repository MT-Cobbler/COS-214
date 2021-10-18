#include "Berserker.h"

Berserker::Berserker() : Soldier()
{
    this->hp = 10;
    this->pw = "Big Chainsaw"; 
    this->sw = "pistol";
    this->damage = 4; 
    cout << "Berserker" << endl;
}
Berserker::Berserker::Berserker(string n){
    this->name = n;
    this->hp = 10;
    this->pw = "Big Chainsaw"; 
    this->sw = "pistol";
    this->damage = 4; 
    cout << "Berserker" << endl;
}
Berserker::~Berserker()
{
    delete this;
}
bool Berserker::hitZombie(Zombie* z){
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
void Berserker::celebrate(){
    cout << this->name << " exclaims headshot! " << endl;
}
bool Berserker::getHit(Zombie *z){
    int zDamage = z->getDamage();
    this->hp -= zDamage;
    if(this->hp > 0){
        cout << this->name << " pretends not to notice the " << zDamage << " damage he takes." << endl;
        return false;
    }
    else{
        return true;
    }
}
void Berserker::die(){
    cout << this->name << "Nobody really liked " << this->name << "'" << " company anyways" << endl;
}
string Berserker::getName(){
    return this->name;
}
int Berserker::getHealth(){
    return this->hp;
}
int Berserker::getDamage(){
    return this->damage;
}
string Berserker::getPrimaryW(){
    return this->pw;
}
string Berserker::getSecondaryW(){
    return this->sw;
}