#ifndef ARSENALFACTORY_H
#define ARSENALFACTORY_H
#include "MerchandiseFactory.h"
#include "ArsenalShirt.h"
#include "ArsenalSoccerBall.h"

class ArsenalFactory : public MerchandiseFactory{
    public:
        ArsenalFactory();
        ~ArsenalFactory();
        SoccerBall* createSoccerBall(string n);
        Shirt* createShirt(string n);
};
#endif