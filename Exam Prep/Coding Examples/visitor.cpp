#include <iostream>
#include <list>
using namespace std;

class objectStructure;
class ConcreteA;
class ConcreteB;

class Visitor
{
    protected:
        string name;
public:
    Visitor() {}
    virtual ~Visitor() {}
    void setName(string n){name = n;}
    string getName(){return this->name;}
    virtual void visitA(ConcreteA *e) = 0;
    virtual void visitB(ConcreteB *e) = 0;
};
class Element
{
public:
    Element() {}
    virtual ~Element() {}
    virtual void accept(Visitor *v) = 0;
};

class ConcreteA : public Element
{
public:
    ConcreteA() {}
    ~ConcreteA() {}
    void accept(Visitor *v)
    {
        v->visitA(this);
    }
    string concreteSpecific()
    {
        return "A";
    }
};
class ConcreteB : public Element
{
public:
    ConcreteB() {}
    ~ConcreteB() {}
    void accept(Visitor *v)
    {
        v->visitB(this);
    }
    string concreteSpecific()
    {
        return "B";
    }
};

class objectStructure
{
private:
    list<Element *> elements;

public:
    objectStructure() {}
    void AddElement(Element *e)
    {
        elements.push_back(e);
    }
    ~objectStructure()
    {
        list<Element *>::iterator it = elements.begin();
        for (; it != elements.end(); ++it)
        {
            delete *it;
        }
    }
    void print(Visitor *v)
    {
        cout << v->getName() << " is performing the operation: " << endl;
        list<Element *>::iterator it = elements.begin();
        for (; it != elements.end(); ++it)
        {
            // cout << "*"; 
            (*it)->accept(v);
        }
    }
};

class VisitorA : public Visitor
{
public:
    VisitorA() {}
    ~VisitorA() {}
    void visitA(ConcreteA *e)
    {
        cout << "VisitorA: Element - " << e->concreteSpecific() << endl;
    }
    void visitB(ConcreteB *e)
    {
        cout << "VisitorB: Element - " << e->concreteSpecific() << endl;
    }
};
class VisitorB : public Visitor
{
public:
    VisitorB() {}
    ~VisitorB() {}
     void visitA(ConcreteA *e)
    {
        cout << "VisitorA: Element - " << e->concreteSpecific() << endl;
    }
    void visitB(ConcreteB *e)
    {
        cout << "VisitorB: Element - " << e->concreteSpecific() << endl;
    }
};

int main()
{
    objectStructure *newO = new objectStructure();
    Visitor *v1 = new VisitorA(); v1->setName("Visitor One");
    Visitor *v2 = new VisitorB(); v2->setName("Visitor Two");
    newO->AddElement(new ConcreteA());
    newO->AddElement(new ConcreteB());
    newO->print(v1);
    newO->print(v2);
    return 0;
}