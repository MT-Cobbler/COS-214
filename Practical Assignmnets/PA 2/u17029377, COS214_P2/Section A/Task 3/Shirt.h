#ifndef SHIRT_H
#define SHIRT_H
#include <iostream>
#include "Merchandise.h"
using namespace std;


class Shirt : public Merchandise{
    public:
        Shirt();
        Shirt(string c, double p, string s);
        ~Shirt();
        string getDescription();
    private:
        string size;
};
#endif

