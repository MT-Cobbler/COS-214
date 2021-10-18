#include "ArsenalShirt.h"

ArsenalShirt::ArsenalShirt(){
    cout << "ArsenalShirt Constructor" << endl;
}
ArsenalShirt::ArsenalShirt(string n) : Shirt("Arsenal", 50.50 , n){

}
ArsenalShirt::~ArsenalShirt(){
    cout << "ArsenalShirt Destructor" << endl;
}