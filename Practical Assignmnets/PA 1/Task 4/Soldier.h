#ifndef SOLDIER_H
#define SOLDIER_H
#include <iostream>
#include "Zombie.h"
#include "SoldierMomento.h"
using namespace std;
class Soldier
{
private:
    /* data */
    int hp;
    string pw; 
    string sw;
    string name;
    int damage;
public:
    Soldier(/* args */);
    Soldier(string n);
    Soldier(string n, int health, string primary, int dam);
    virtual ~Soldier();
    string getName();
    int getHealth();
    string getPrimaryW();
    int getDamage();
    void setName(string n);
    void setHealth(int h);
    void setPrimary(string pw);
    void setDamage(int d);
    void attack(Zombie* z);
    // Momento function //
    SoldierMomento* createSoldierMomento();
    void makeMomento(SoldierMomento* sM);
    // Momento function //
    virtual bool hitZombie(Zombie* z) = 0;
    virtual void celebrate() = 0;
    virtual bool getHit(Zombie* z) = 0;
    virtual void die() = 0;
};
#endif
