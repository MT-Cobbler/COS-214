#include "Shirt.h"
#include "SoccerBall.h"
#include "Merchandise.h"
#include "ArsenalShirt.h"
#include "ArsenalSoccerBall.h"
#include "ChelseaShirt.h"
#include "ChelseaSoccerBall.h"
#include "LiverpoolShirt.h"
#include "LiverpoolSoccerBall.h"

#include <iostream>

using namespace std;

int main(){

    Merchandise* ball = new ArsenalSoccerBall("y");
    Merchandise* ball1 = new ChelseaSoccerBall("n");
    Merchandise* ball2 = new LiverpoolSoccerBall("Y");
    cout << ball->getDescription() << endl;
    cout << ball1->getDescription() << endl;
    cout << ball2->getDescription() << endl;

    Merchandise* shirt = new ArsenalShirt("Large");
    Merchandise* shirt1 = new ChelseaShirt("Medium");
    Merchandise* shirt2 = new LiverpoolShirt("Small");
    cout << shirt->getDescription() << endl;
    cout << shirt1->getDescription() << endl;
    cout << shirt2->getDescription() << endl;
    return 0;
}