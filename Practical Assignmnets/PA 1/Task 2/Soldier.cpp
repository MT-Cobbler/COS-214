#include "Soldier.h"
Soldier::Soldier(){
    name = "Soldier 1";
    hp = 100;
    pw = sw = "";
    cout << "Soldier created: ";
}
Soldier::Soldier(string n){
    this->name = n;
}
Soldier::~Soldier(){
    delete this;
}
Soldier::Soldier(string n, int health, string primary){
    this->name = n;
    this->hp = health;
    this->pw = primary;
    this->sw = "pistol";
}
void Soldier::attack(Zombie *z){
    while(this->getHealth() > 0 && z->getHealth() > 0){
        if(hitZombie(z)){
            this->celebrate();
        }
        else{
            if(getHit(z)){
                this->die();
            }
        }
    }
}
