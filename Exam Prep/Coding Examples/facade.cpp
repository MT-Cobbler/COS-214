#include <iostream>
using namespace std;

class Subsystem1
{
public:
    string Operation1()
    {
        return "Subsystem1: Ready!\n";
    }
    string OperationN()
    {
        return "Subsystem1: Go!\n";
    }
};

class Subsystem2
{
public:
    string Operation1() const
    {
        return "Subsystem2: Get ready!\n";
    }
    // ...
    string OperationN() const
    {
        return "Subsystem2: Fire!\n";
    }
};


class Facade{
    protected:
        Subsystem1* s1;
        Subsystem2* s2;
    public:
        Facade(){
            s1 = new Subsystem1();
            s2 = new Subsystem2();
        }
        ~Facade(){
            delete s1; delete s2;
        }
        string Operation(){
            cout << "Facade will now execute available susystems:" << endl;
            string result;
            result += s1->Operation1();
            result += s1->OperationN();
            result += s2->Operation1();
            result += s2->OperationN();
            return result;
        }
};
int main()
{
    Facade* newF = new Facade();
    cout << newF->Operation() << endl;
    return 0;
}