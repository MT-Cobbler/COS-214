#ifndef SNIPER_H
#define SNIPER_H
#include <iostream>
#include "Soldier.h"
using namespace std;
class Sniper : public Soldier
{
private:
    /* data */
    string name; 
    int hp; 
    string pw; 
    string sw;
    int damage;
public:
    Sniper();
    Sniper(string n);
    ~Sniper();
    bool hitZombie(Zombie* z);
    void celebrate();
    bool getHit(Zombie* z);
    void die();

};
#endif
