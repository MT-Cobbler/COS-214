#include "ListOfCore.h"

ListOfCore::ListOfCore(){

}
ListOfCore::~ListOfCore(){
    delete startingPoint;
    for(list<Engineer*>::iterator it = _list.begin(); it != _list.end(); ++it){
        delete *it;
    }  
}

EngineerIterator* ListOfCore::createEngineerIterator(){
    return new CoreIterator(itList);
}
void ListOfCore::addEngineer(Engineer* e){
    _list.push_back(e);
}
void ListOfCore::removeEngineer(){
    _list.pop_back();
}
bool ListOfCore::isEmpty(){
    return _list.size() > 0 ? true : false;
}