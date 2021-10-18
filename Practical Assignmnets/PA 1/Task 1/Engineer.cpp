#include "Engineer.h"

Engineer::Engineer() : Soldier()
{
    name = "Engineer";
    hp = 100;
    pw = sw = "";
    cout << "Engineer" << endl;
}
Engineer::Engineer(string n){
    this->name = n;hp = 100;
    pw = sw = "";
     cout << "Engineer" << endl;
}
Engineer::~Engineer()
{
    delete this;
}

bool Engineer::hitZombie(Zombie* z){
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
void Engineer::celebrate(){
    // zombie dies
    cout << this->name << " exclaims headshot! " << endl;
}
bool Engineer::getHit(Zombie *z){
    int damage = z->getDamage();
    this->hp -= damage;
    if(this->hp > 0){
        cout << this->name << " hides behind the nearest rock after taking " << damage << " damage." << endl;
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
string Engineer::getPrimaryW(){
    return this->pw;
}
string Engineer::getSecondaryW(){
    return this->sw;
}