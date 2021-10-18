#include "Sniper.h"

Sniper::Sniper() : Soldier()
{
    this->hp = 6;
    this->pw = ".308 Rifle"; 
    this->sw = "pistol";
    this->damage = 5; 
    cout << "Sniper" << endl;
}
Sniper::Sniper(string n){
    this->name = n;
    this->hp = 6;
    this->pw = ".308 Rifle"; 
    this->sw = "pistol";
    this->damage = 5; 
    cout << "Sniper" << endl;
}
Sniper::~Sniper()
{
    delete this;
}
bool Sniper::hitZombie(Zombie* z){
    cout << this->name << " fires a " << this->pw << " at a zombie." << endl;
    if(z->takeDamage(5) > 0){
        return false;
    }
    else{
        return true;
    }
}
void Sniper::celebrate(){
    cout << this->name << " exclaims headshot! " << endl;
}
bool Sniper::getHit(Zombie *z){
    int zDamage = z->getDamage();
    this->hp -= zDamage;
    if(this->hp > 0){
        cout << this->name << " swears in 13 different languages as he takes " << zDamage << " damage." << endl;
        return false;
    }
    else{
        return true;
    }
}
void Sniper::die(){
    cout << this->name << " lead a good life. He will be missed." << endl;
    
}
string Sniper::getName(){
    return this->name;
}
int Sniper::getHealth(){
    return this->hp;
}
int Sniper::getDamage(){
    return this->damage;
}
string Sniper::getPrimaryW(){
    return this->pw;
}
string Sniper::getSecondaryW(){
    return this->sw;
}