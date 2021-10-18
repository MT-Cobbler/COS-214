#ifndef BERSERKER_H
#define BERSERKER_H
#include <iostream>
#include "Soldier.h"
using namespace std;
class Berserker : public Soldier
{
private:
    /* data */
    string name; 
    int hp; 
    string pw; 
    string sw;
public:
    Berserker();
    Berserker(string n);
    ~Berserker();
    bool hitZombie(Zombie* z);
    void celebrate();
    bool getHit(Zombie* z);
    void die();
    void attack(Zombie* z);
    string getName();
    int getHealth();
    string getPrimaryW();
    string getSecondaryW();
};
#endif
