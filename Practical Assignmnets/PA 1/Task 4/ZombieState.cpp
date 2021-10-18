#include "ZombieState.h"

ZombieState::ZombieState(){}
ZombieState::ZombieState(string a, int h,int d){
    setAtt(a); setDamage(d); setHealth(h);
}
int ZombieState::takeDamage(int d){
    damage -= d;
    return damage;
}
int ZombieState::getHealth(){
    return hp;
}
int ZombieState::getDamage(){
    return damage;
}
string ZombieState::getAttribute(){
    return attackType;
}
void ZombieState::setDamage(int d){
    damage = d;
}
void ZombieState::setHealth(int h){
    hp = h;
}
void ZombieState::setAtt(string a){
    attackType = a;
}