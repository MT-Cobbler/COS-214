#include "Zombie.h"
Zombie::Zombie(){}
Zombie::Zombie(const char* att, int dam): attackType(att), damage(dam){
  hp = 10;
}
Zombie::~Zombie()
{
}
Zombie* Zombie::clone(){
	Zombie* zom = new Zombie();
	zom->setDamage(this->getDamage());
	zom->setHealth(this->getHealth());
	zom->setAtt(this->getAttribute());
	return zom;
}
int Zombie::takeDamage(int amount)
{
	cout << "Zombie took " << amount << " damage." << endl;
	hp -= amount;
	return hp;
}

int Zombie::getDamage()
{
	cout << "Zombie used " << attackType << "." << endl;
	return damage;
}
int Zombie::getHealth(){
	return hp;
}
string Zombie::getAttribute(){
	return attackType;
}
void Zombie::setAtt(string a){
	attackType = a;
}

void Zombie::setDamage(int d){
	damage = d;
}
void Zombie::setHealth(int h){
	hp = h;
}
// Momento Methods //
ZombieMomento *Zombie::createMomento(){
    return new ZombieMomento(attackType, hp, damage);
}
void Zombie::makeZombieMomento(ZombieMomento *zM){
    ZombieState* newZ = zM->getState();
    hp = newZ->getHealth();
    attackType = newZ->getAttribute();
    damage =  newZ->getDamage();
}
// Momento Methods //