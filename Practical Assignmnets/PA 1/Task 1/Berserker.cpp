#include "Berserker.h"

Berserker::Berserker() : Soldier()
{
    name = "Berserker";
    hp = 100;
    pw = sw = "";
    cout << "Berserker" << endl;
}
Berserker::Berserker(string n){
    this->name = n;
    hp = 100;
    pw = sw = "";
    cout << "Berserker" << endl;
}
Berserker::~Berserker()
{
    delete this;
}

bool Berserker::hitZombie(Zombie* z){
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
void Berserker::celebrate(){
    // zombie dies
    cout << this->name << " exclaims headshot! " << endl;
}
bool Berserker::getHit(Zombie *z){
    int damage = z->getDamage();
    this->hp -= damage;
    if(this->hp > 0){
        cout << this->name << " pretends not to notice the " << damage << " damage he takes." << endl;
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
string Berserker::getPrimaryW(){
    return this->pw;
}
string Berserker::getSecondaryW(){
    return this->sw;
}