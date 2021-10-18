#ifndef DEFENDPLAYSTYLE_H
#define DEFENDSTYLE_H
#include "PlayStyle.h"

#include <iostream>
using namespace std;
class DefendPlayStyle : public PlayStyle{
    public:
        DefendPlayStyle();
        ~DefendPlayStyle();
        string play();
        string getStyle();
};
#endif 