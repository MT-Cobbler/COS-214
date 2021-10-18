#include "Engineer.h"

Engineer::Engineer() : Soldier()
{
    this->hp = 7;
    this->pw = "Wrench"; 
    this->sw = "pistol";
    this->damage = 3; 
    cout << "Engineer" << endl;
}
Engineer::Engineer(string n){
    this->name = n;
    this->hp = 7;
    this->pw = "Wrench"; 
    this->sw = "pistol";
    this->damage = 3; 
     cout << "Engineer" << endl;
}
Engineer::~Engineer()
{
    delete this;
}

bool Engineer::hitZombie(Zombie* z){
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
void Engineer::celebrate(){
    cout << this->name << " exclaims headshot! " << endl;
}
bool Engineer::getHit(Zombie *z){
    int zDamage = z->getDamage();
    this->hp -= zDamage;
    if(this->hp > 0){
        cout << this->name << " hides behind the nearest rock after taking " << zDamage << " damage." << endl;
        return false;
    }
    else{
        return true;
    }
}
void Engineer::die(){
    cout << this->name << " was eaten by a zombie." << endl;
}
string Engineer::getName(){
    return this->name;
}
int Engineer::getHealth(){
    return this->hp;
}
int Engineer::getDamage(){
    return this->damage;
}
string Engineer::getPrimaryW(){
    return this->pw;
}
string Engineer::getSecondaryW(){
    return this->sw;
}