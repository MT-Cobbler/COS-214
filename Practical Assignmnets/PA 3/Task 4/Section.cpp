#include "Section.h"
using namespace std;
Section::Section(){}
Section::~Section(){
    vector<Observer*>::iterator it;
    for(it = observerList.begin(); it != observerList.end(); ++it){
        delete *it;
    }
}
void Section::add(Section *){}
void Section::remove(){}
// task 3
void Section::attach(Observer *o){
    observerList.push_back(o);
}
void Section::detach(Observer* o){
    // find o and remove it
    // vector<Observer*>::iterator it = observerList.find_if(observerList.begin(), observerList.end(), o);
    vector<Observer*>::iterator it;
    for(it = observerList.begin(); it != observerList.end(); ++it){
        if( *it == o){
            observerList.erase(it);
        }
    }
    // observerList.erase(it);
}
void Section::notify(){
    // call each observer's updae function
    for(vector<Observer*>::iterator it = observerList.begin(); it != observerList.end(); ++it){
        (*it)->update();
    }
}