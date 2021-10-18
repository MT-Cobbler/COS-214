#include "Decorator.h"

Decorator::Decorator(){
    section = nullptr;
}
Decorator::~Decorator(){
    delete section;
}
void Decorator::print(){
    section->print();
}
void Decorator::add(Section* s){
    if(this->section == nullptr){
        section = s;
    }
    else{
        // section->print();
        section->add(s);
    }
}
void Decorator::remove(){
    if(section != nullptr){
        section = nullptr;
    }
}