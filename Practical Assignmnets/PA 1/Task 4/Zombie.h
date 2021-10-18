#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <string>
#include "ZombieMomento.h"
using namespace std;

class Zombie
{
private:
	int hp;
	string attackType;
	int damage;

public:
	Zombie();
	Zombie(const char*,int);
	~Zombie();
	Zombie* clone();
	// reduces the zombie's hp and returns the new value of hp
	int takeDamage(int);
	// returns the zombie's damage
	int getDamage();
	int getHealth();

	// Momento Methods //
	ZombieMomento* createMomento();
    void makeZombieMomento(ZombieMomento* zM);
	// Momento Methods //
	string getAttribute();
	void setDamage(int d);
	void setHealth(int h);
	void setAtt(string a);
};

#endif