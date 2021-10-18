#include "Shirt.h"

Shirt::Shirt(){
    cout << "Shirt Constructor" << endl;
}

Shirt::Shirt(string c, double p, string s) : Merchandise(c,p, "Shirt"){

    this->size = s;
}

Shirt::~Shirt(){
    cout << "Shirt Destructor" << endl;
}
string Shirt::getDescription(){
    string d;
    d += Merchandise::getDescription();
    return d += "Size: " + this->size;
}