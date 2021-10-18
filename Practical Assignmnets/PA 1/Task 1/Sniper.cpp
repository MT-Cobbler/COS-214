#include "Sniper.h"

Sniper::Sniper() : Soldier()
{
    name = "Sniper";
    hp = 100;
    pw = sw = "";
    cout << "Sniper" << endl;
}
Sniper::Sniper(string n){
    this->name = n;
    hp = 100;
    pw = sw = "";
    cout << "Sniper" << endl;
}
Sniper::~Sniper()
{
    delete this;
}

bool Sniper::hitZombie(Zombie* z){
    cout << this->name << " fires a " << this->pw << " at a zombie." << endl;
        // if the zombie is still alive
    if(z->takeDamage(5) > 0){
        // still alive
        return false;
    }
    else{
        return true;
    }
}
void Sniper::celebrate(){
    // zombie dies
    cout << this->name << " exclaims headshot! " << endl;
}
bool Sniper::getHit(Zombie *z){
    int damage = z->getDamage();
    this->hp -= damage;
    if(this->hp > 0){
        cout << this->name << " swears in 13 different languages as he takes " << damage << " damage." << endl;
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
string Sniper::getPrimaryW(){
    return this->pw;
}
string Sniper::getSecondaryW(){
    return this->sw;
}