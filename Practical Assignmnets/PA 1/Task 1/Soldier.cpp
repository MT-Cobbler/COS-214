#include "Soldier.h"
Soldier::Soldier(){
    name = "Soldier 1";
    hp = 100;
    pw = sw = "";
    cout << "Soldier created: ";
}
Soldier::Soldier(string n, int h, string primary, string secondary){
    this->name = n; this->hp = h; this->pw = primary; this->sw = secondary;
}
Soldier::~Soldier(){
    delete this;
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
