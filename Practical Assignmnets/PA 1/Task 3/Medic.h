#ifndef MEDIC_H
#define MEDIC_H
#include <iostream>
#include "Soldier.h"
using namespace std;
class Medic : public Soldier
{
private:
    /* data */
    string name; 
    int hp; 
    string pw; 
    string sw;
    int damage;
public:
    Medic();
    Medic(string n);
    ~Medic();
    bool hitZombie(Zombie* z);
    void celebrate();
    bool getHit(Zombie* z);
    void die();

};
#endif
