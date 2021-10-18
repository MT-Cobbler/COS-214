#include "VectorOfOperations.h"

VectorOfOperations::VectorOfOperations(){

}
VectorOfOperations::~VectorOfOperations(){
    vector<Engineer*>::iterator it = list.begin();
    for( ; it != list.end(); ++it){
        delete *it;
    }
}

void VectorOfOperations::addEngineer(Engineer* e){
    list.push_back(e);
}
void VectorOfOperations::removeEngineer(){
    list.pop_back();
}
bool VectorOfOperations::isEmpty(){
    return list.size() > 0 ? true : false;
}