#ifndef MERCHANDISE_H
#define MERCHANDISE_H
#include <iostream>
using namespace std;

static int counter = 0;

class Merchandise{
    // abstract class
    // soccer and shirt inherit from here
    private:
        string club; // Chelsea, Liverpool, Arsenal
        string type; // ball or shirt
        double price; // of merchandise
        int id;
    public:
        // static int counter;
        Merchandise();
        Merchandise(string c, double p, string t);
        virtual ~Merchandise();
        virtual string getDescription(); // other classes 
    protected:
        string getClub();
        string getType();
        double getPrice();
        void setClub(string c);
        void setType(string t);
        void setPrice(double p);
};
#endif