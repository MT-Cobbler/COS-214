#include "Person.h"
Person::Person(){}
Person::Person(string n, int a, string add){
    name = n; age = a; address = add;
}
Person::Person(Person* p){
    // this is the copy constructor
    name = p->name;
    address = p->address;
    age = p->age;
}
void Person::setName(string n){
    name = n;
}
void Person::setAddress(string add){
    address = add;
}
void Person::setAge(int a){
    age = a;
}
string Person::getName(){
    return name;
}
string Person::getAddress(){
    return address;
}
int Person::getAge(){
    return age;
}