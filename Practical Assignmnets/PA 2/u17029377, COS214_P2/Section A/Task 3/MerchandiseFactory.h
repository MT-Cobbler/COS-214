#ifndef MERCHANDISEFACTORY_H
#define MERCHANDISEFACTORY_H
#include "Merchandise.h"
#include "SoccerBall.h"
#include "Shirt.h"

#include <iostream>

class MerchandiseFactory{
    public:
        MerchandiseFactory();
        virtual ~MerchandiseFactory();
        virtual SoccerBall* createSoccerBall(string n) = 0;
        virtual Shirt* createShirt(string n) = 0;
};
#endif