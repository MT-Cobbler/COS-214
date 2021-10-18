#ifndef LIVERPOOLFACTORY_H
#define LIVERPOOLFACTORY_H
#include "MerchandiseFactory.h"
#include "LiverpoolShirt.h"
#include "LiverpoolSoccerBall.h"

class LiverpoolFactory : public MerchandiseFactory{
    public:
        LiverpoolFactory();
        ~LiverpoolFactory();
        SoccerBall* createSoccerBall(string n);
        Shirt* createShirt(string n);
};
#endif