#ifndef POSSESIONPLAYSTYLE_H
#define POSSESIONPLAYSTYLE_H
#include "PlayStyle.h"

#include <iostream>
using namespace std;
class PossesionPlayStyle : public PlayStyle{
    public:
        PossesionPlayStyle();
        ~PossesionPlayStyle();
        string play();
};
#endif 