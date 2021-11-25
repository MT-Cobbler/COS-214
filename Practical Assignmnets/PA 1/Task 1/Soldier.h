#ifndef SOLDIER_H
#define SOLDIER_H
#include <iostream>
#include "Zombie.h"
using namespace std;
class Soldier
{
protected:
    /* data */
    string name; 
    int hp; 
    string pw; 
    string sw;
public:
    Soldier(/* args */);
    Soldier(string n, int h, string primary, string secondary);
    ~Soldier();
    // template method
    void attack(Zombie* z);
    // template method
    virtual bool hitZombie(Zombie* z) = 0;
    virtual void celebrate() = 0;
    virtual void die() = 0;
    virtual string getName() = 0;
    virtual int getHealth() = 0;
    virtual bool getHit(Zombie* z) = 0;
    virtual string getPrimaryW() = 0;
    virtual string getSecondaryW() = 0;
};
#endif
