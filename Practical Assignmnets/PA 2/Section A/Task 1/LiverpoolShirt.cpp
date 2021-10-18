#include "LiverpoolShirt.h"

LiverpoolShirt::LiverpoolShirt(){
    cout << "LiverpoolShirt Constructor" << endl;
}
LiverpoolShirt::LiverpoolShirt(string n) : Shirt("Liverpool", 50.50 , n){

}
LiverpoolShirt::~LiverpoolShirt(){
    cout << "LiverpoolShirt Destructor" << endl;
}