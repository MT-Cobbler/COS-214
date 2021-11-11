#include <iostream>
using namespace std;

class Component
{
protected:
    string name;
    string description;

public:
    virtual void operation() = 0;
};

class ConcreteComponentA : public Component
{
public:
    ConcreteComponentA()
    {
        this->name = "ConcreteComponentA";
        this->description = "Description of ConcreteComponentA ";
    }
    void operation(){
        cout << endl;
        cout << this->name << " - " << this->description;
    }
};

class ConcreteComponentB : public Component
{
public:
    ConcreteComponentB()
    {
        this->name = "ConcreteComponentB";
        this->description = "Description of ConcreteComponentB ";
    }
    void operation(){
        cout << endl;
        cout << this->name << " - " << this->description;
    }
};

class Decorator : public Component
{
    private:
        Component* comp;
    public:
        Decorator(Component* c) : comp(c){}
        virtual void operation(){
            comp->operation();
        }
        Component* getComponent(){return this->comp;}
};

class ConcreteDecoratorA : public Decorator
{
    public:
        ConcreteDecoratorA(Component* c) : Decorator(c){};
        void operation(){
            cout << endl;
            Decorator::operation();
            cout <<  "is extened by ConcreteDecoratorA.";
        }
};

class ConcreteDecoratorB : public Decorator
{
    public:
        ConcreteDecoratorB(Component* c) : Decorator(c){};
        void operation(){
            cout << endl;
            Decorator::operation();
            cout <<  "is extened by ConcreteDecoratorB.";
        }
};

int main()
{
    Component* newCA = new ConcreteComponentA();
    Component* newCB = new ConcreteComponentB();
    newCA->operation();
    newCB->operation();
    Decorator* newDA = new ConcreteDecoratorA(newCA);
    Decorator* newDB = new ConcreteDecoratorB(newCB);
    newDA->operation();
    newDB->operation();
    cout << endl;
    return 0;
}