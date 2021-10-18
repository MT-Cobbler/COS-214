#include "Soldier.h"
Soldier::Soldier(){
}
Soldier::Soldier(string n){
    this->setName(n);
}
Soldier::~Soldier(){
}
string Soldier::getName(){
    return name;
}
string Soldier::getPrimaryW(){
    return pw;
}
int Soldier::getDamage(){
    return damage;
}
int Soldier::getHealth(){
    return hp;
}
void Soldier::setName(string n){
    name = n;
}
void Soldier::setDamage(int d){
    damage = d;
}
void Soldier::setPrimary(string p){
    pw = p;
}
void Soldier::setHealth(int h){
    hp = h;
}
void Soldier::attack(Zombie *z){
    while(this->getHealth() > 0 && z->getHealth() > 0){
        if(this->hitZombie(z)){
            this->celebrate();
        }
        else{
            if(getHit(z)){
                this->die();
            }
        }
    }
}
