#include "Merchandise.h"

Merchandise::Merchandise(){
    cout << "Merchandise Constructor" << endl;
}

Merchandise::Merchandise(std::string c, double p, string t){
    counter += 1;
    this->club = c; this->price = p; this->type = t;
    id = counter;
}

Merchandise::~Merchandise(){
    cout <<"Merchandise Destructor" << endl;
}
string Merchandise::getDescription(){
    string d;
    int inte = 0; int dece = 0; 
    inte = this->price;
    dece = this->price * 100;
    // d+= "Creating - Item #" + to_string(this->id) + " " + this->club + " " + this->type + ", Price: R" + to_string(inte) + "." + to_string(dece % 100);
    d+= "Creating - Item #" + to_string(this->id) + " " + this->club + " " + this->type + ", Price: R" + to_string((int)this->price);
    d += ", ";
    return d; 
}
string Merchandise::getClub(){
    return this->club;
}
string Merchandise::getType(){
    return this->type;
}
double Merchandise::getPrice(){
    return this->price;
}
void Merchandise::setClub(string c){
    this->club = c;
}
void Merchandise::setType(string t){
    this->type = t;
}
void Merchandise::setPrice(double p){
    this->price = p;
}