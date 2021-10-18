#ifndef ENGINEER_H
#define ENGINEER_H
#include <iostream>
#include "Soldier.h"
using namespace std;
class Engineer : public Soldier
{
private:
    /* data */
    string name; 
    int hp; 
    string pw; 
    string sw;
public:
    Engineer();
    Engineer(string n);
    ~Engineer();
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
