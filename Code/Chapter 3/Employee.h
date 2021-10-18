#ifndef EMPLOYEE H
#define EMPLOYEE.H

class Employee{
    public:
        Employee(char* theName , float thePayrate);
        char* getName();
        float getPayrate();
        float pay(float hoursWorked);
    protected:
        char* name;
        float payRate;
};
#endif
