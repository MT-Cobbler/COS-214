#include <iostream>

using namespace std;

class Implementor{
    public:
        virtual ~Implementor(){}
        virtual string OperationImplementor() = 0;
};

class ConcreteImplementorA : public Implementor{
    public:
        ~ConcreteImplementorA(){}
        string OperationImplementor(){
            return "ConcreteImplementorA: Here's the result on the platform.\n";
        }
};
class ConcreteImplementorB : public Implementor{
    public:
        ~ConcreteImplementorB(){}
        string OperationImplementor(){
            return "ConcreteImplementorB: Here's the result on the platform.\n";
        }
};

class Abstraction{
    protected:
        Implementor* imp;
    public:
        Abstraction(Implementor* i) : imp(i){}
        virtual ~Abstraction(){}
        virtual string Operation(){
            cout <<" *\n";
            return "Abstraction: Base operation with:\n" + this->imp->OperationImplementor();
        }
};
class ConcreteAbstractionA : public Abstraction{
    public:
        ConcreteAbstractionA(Implementor* i) : Abstraction(i) {}
        string Operation(){
            return Abstraction::Operation() + "ConcreteAbstractionA: Exended operation:\n";
        }
};

int main(){
    Implementor* newI = new ConcreteImplementorA();
    Implementor* newII = new ConcreteImplementorB();
    Abstraction* newA = new ConcreteAbstractionA(newI);
    cout << newA->Operation() << endl;
    newA = new ConcreteAbstractionA(newII);
    cout << newA->Operation() << endl;
    return 0;
}