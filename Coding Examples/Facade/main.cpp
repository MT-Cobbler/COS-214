#include <iostream>
using namespace std;

class Subsystem1 {
    public:
        string Operation1(){
            return "Subsystem 1: Ready!\n";
        }
        string OperationZ(){
            return "Subsystem 1:Go!\n";
        }
};

class Subsystem2{
    public:
        string Operation1(){
            return "Subsystem 2: Ready!\n";
        }
        string OperationN(){
            return "Subsystem 2:Go!\n";
        }
};

class Facade{
    protected:
        Subsystem1* s1;
        Subsystem2* s2;
    public:
        Facade(Subsystem1* s1 = nullptr, Subsystem2 * s2 = nullptr){
            this->s1 = s1 ? : new Subsystem1();
            this->s2 = s2 ? : new Subsystem2();
        }
        ~Facade(){
            delete s1;
            delete s2;
        }
        string Operation(){
            string result =  "Facade initializes subsystems\n";
            result += this->s1->Operation1();
            result += this->s2->Operation1();
            result += "Facade orders subsystems to perform the action\n";
            result += this->s1->OperationZ();
            result += this->s2->OperationN();
            return result;
        }
};

void ClientCode(Facade* facade){
    cout << facade->Operation() << endl;
}

int main(){
    Subsystem1* s1 = new Subsystem1();
    Subsystem2* s2 = new Subsystem2();
    Facade* facade = new Facade(s1, s2);
    ClientCode(facade);

    return 0;
}