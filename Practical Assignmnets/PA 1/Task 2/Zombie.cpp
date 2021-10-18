#include "Zombie.h"
#include <iostream>

Zombie::Zombie(const char* att, int dam): attackType(att), damage(dam)
{
  hp = 10;
  cout << "Zombie created" << endl;
}

Zombie::~Zombie()
{
	delete this;
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