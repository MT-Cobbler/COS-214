#include "Employee.h"
using namespace std;

Employee::Employee(char* theName, float thePayrate){
    name = theName; payRate = thePayrate;
}
char* Employee::getName(){
    return name;
}
float Employee:: getPayrate(){
    return payRate;
}
float Employee::pay(float hoursWorked){
    return hoursWorked * payRate;
}