#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <string>

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
	string getAttribute();
	void setDamage(int d);
	void setHealth(int h);
	void setAtt(string a);
};

#endif