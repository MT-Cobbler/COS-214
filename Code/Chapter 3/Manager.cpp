#include "Manager.h"

using namespace std;

Manager::Manager(char *theName, float thePayRate, bool isSalaried): Employee(theName, thePayRate), isSalaried(isSalaried){

}
const bool Manager::getSalaried(){

}
const float Manager::pay(float hoursWorked){
    if(isSalaried)return payRate;
    // you need to class the parent class in order to call the method pay
    return Employee::pay(hoursWorked);
}
