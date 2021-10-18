#ifndef ZOMBIESTORE_H
#define ZOMBIESTORE_H
#include <iostream>
#include "ZombieMomento.h"
#include "Zombie.h"
using namespace std;

class ZombieStore{
    private:
        ZombieMomento* _zMomento;
    public:
        void store(ZombieMomento* zM);
        ZombieMomento* getMomento();
        ~ZombieStore();
};
#endif
