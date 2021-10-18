#ifndef SOLDIERSTATE_H
#define SOLDIERSTATE_H
#include <iostream>

using namespace std;
class SoldierState{
    private:
        int hp;
        string pw; 
        string sw;
        string name;
        int damage;
    public:
        SoldierState(/* args */);
        SoldierState(string n);
        SoldierState(string n, int health, string primary, int dam);
        string getName();
        int getHealth();
        string getPrimaryW();
        int getDamage();
        void setName(string n);
        void setHealth(int h);
        void setPrimary(string pw);
        void setDamage(int d);
};
#endif