#ifndef ATTACKPLAYSTYLE_H
#define ATTACKSTYLE_H
#include "PlayStyle.h"

#include <iostream>
using namespace std;
class AttackPlayStyle : public PlayStyle{
    public:
        AttackPlayStyle();
        ~AttackPlayStyle();
        string play();
        string getStyle();
};
#endif 