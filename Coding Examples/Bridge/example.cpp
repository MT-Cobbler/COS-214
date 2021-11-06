#include <iostream>
using namespace std;

class Implementor;
class ConcreteImplementor1;
class ConcreteImplementor2;
class Implementor
{
public:
    Implementor() { cout << "Implementor : "; }
    virtual void operationImp() = 0;
};

class ConcreteImplementor1 : public Implementor
{
public:
    ConcreteImplementor1() { cout << "ConcreteImplementor1" << endl; }
    void operationImp()
    {
        cout << "ConcreteImplementor1 operation method" << endl;
    }
};

class ConcreteImplementor2 : public Implementor
{
public:
    ConcreteImplementor2() { cout << "ConcreteImplementor2" << endl; }
    void operationImp()
    {
        cout << "ConcreteImplementor2 operation method" << endl;
    }
};
class Abstraction
{
protected:
    Implementor *implement;

public:
    Abstraction(){};
    Abstraction(Implementor *i)
    {
        cout << "Abstraction Class : ";
        implement = i;
    }
    virtual ~Abstraction()
    {
        delete implement;
        cout << "Goodbye" << endl;
    }
    virtual void operation()
    {   
        cout << "Base Abstraction: ";
        implement->operationImp();
    }
};

class RefinedAbstraction : public Abstraction
{
public:
    RefinedAbstraction(Implementor *i) : Abstraction(i)
    {
        cout << "RefineAbstraction" << endl;
    }
    void operation()
    {   cout << "Refined Abstraction: ";
        this->implement->operationImp();
    }
private:
};

int main()
{
    Implementor *Implementor = new ConcreteImplementor1;
    Abstraction *abstraction = new Abstraction(Implementor);
    abstraction->operation();

    Implementor = new ConcreteImplementor2;
    abstraction = new RefinedAbstraction(Implementor);
    abstraction->operation();

    return 0;
}