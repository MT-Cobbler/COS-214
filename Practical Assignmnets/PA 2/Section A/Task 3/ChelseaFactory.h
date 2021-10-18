#ifndef CHELSEAFACTORY_H
#define CHELSEAFACTORY_H
#include "MerchandiseFactory.h"
#include "ChelseaShirt.h"
#include "ChelseaSoccerBall.h"

class ChalseaFactory : public MerchandiseFactory{
    public:
        ChalseaFactory();
        ~ChalseaFactory();
        SoccerBall* createSoccerBall(string n);
        Shirt* createShirt(string n);
};
#endif