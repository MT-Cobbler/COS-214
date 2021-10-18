#ifndef ZOMBIESTATE_H
#define ZOMBIESTATE_H

using namespace std;
#include <iostream>
class ZombieState
{
private:
    /* data */
    int hp;
	string attackType;
	int damage;

public:
    ZombieState();
	ZombieState(string,int,int);
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
