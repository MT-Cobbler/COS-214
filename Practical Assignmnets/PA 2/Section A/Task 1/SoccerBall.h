#ifndef SOCCERBALL_H
#define SOCCERBALL_H
#include "Merchandise.h"
#include <iostream>
using namespace std;
class SoccerBall : public Merchandise{
    private:
        bool inflate;
    public:
        SoccerBall();
        SoccerBall(string c, double p, string n);
        ~SoccerBall();
        string getDescription();
};
#endif