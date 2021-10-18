#include "SoldierState.h"

SoldierState::SoldierState(){

}
SoldierState::SoldierState(string n){
    
}
SoldierState::SoldierState(string n, int h, string p, int d){
    setName(n);
    setHealth(h);
    setPrimary(p);
    setDamage(d);
}
string SoldierState::getName(){
    return name;
}
int SoldierState::getHealth(){
    return hp;
}
string SoldierState::getPrimaryW(){
    return pw;
}
int SoldierState::getDamage(){
    return damage;
}
void SoldierState::setName(string n){
    name = n;
}
void SoldierState::setHealth(int h){
    hp = h;
}
void SoldierState::setPrimary(string p){
    pw = p;
}
void SoldierState::setDamage(int d){
    damage = d;
}