#include "ChelseaShirt.h"

ChelseaShirt::ChelseaShirt(){
    cout << "ChelseaShirt Constructor" << endl;
}
ChelseaShirt::ChelseaShirt(string n) : Shirt("Chelsea", 50.50 , n){

}
ChelseaShirt::~ChelseaShirt(){
    cout << "ChelseaShirt Destructor" << endl;
}