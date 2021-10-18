#ifndef MANAGER.H
#define MANAGER.H

// manager inherits from Employee
#include "Employee.h"

class Manager : public Employee{
    public:
        Manager(char* theName, float thePayRate, bool isSalaried);
        const bool getSalaried();
        virtual const float pay(float hoursWorked);

    protected:
        bool isSalaried;
};

#endif