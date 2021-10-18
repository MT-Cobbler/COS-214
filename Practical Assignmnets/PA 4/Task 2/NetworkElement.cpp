#include "NetworkElement.h"

#include <iostream>

NetworkElement::NetworkElement(){
    // cout <<"NetworkElement: ";
}

NetworkElement::~NetworkElement(){
    for(list<Engineer*>::iterator it = engineers.begin(); it != engineers.end(); ++it){
        delete *it;
    }  
}

void NetworkElement::attach(Engineer* e){
    engineers.push_back(e);
}

void NetworkElement::detach(Engineer* e){
    engineers.remove(e);
}

void NetworkElement::notify(){
    string sentence = this->getName() + " changed status to " + this->getAlarm() + "! Notifying: ";
    for(list<Engineer*>::iterator it = engineers.begin(); it != engineers.end(); ++it){
        sentence += (*it)->getName() + " ";
        (*it)->update();
    }
    cout << sentence << endl;
}

void NetworkElement::engFix(Engineer *e, std::string changeTo){
    // look for engineer
    list<Engineer*>::iterator it = engineers.begin();
    for( ; it != engineers.end(); ++it){
        if((*it)->getName() == e->getName()){
            e->setAlarm(changeTo);
        }
    }
}