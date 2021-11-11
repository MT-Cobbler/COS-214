#include <iostream>
#include <list>
using namespace std;

class Component
{
protected:
    string name;

public:
    string getName() { return this->name; }
    void setName(string n)
    {
        name = n;
    }
    virtual void operation() = 0;
    virtual void add(Component *p){};
    virtual void remove(Component *p){};
    virtual void getChild(int c){};
};

class Leaf : public Component
{
public:
    Leaf()
    {
        setName("Leaf");
    }
    void operation()
    {
        cout << "I am a leaf" << endl;
    }
};

class Composite : public Component
{
private:
    list<Component *> compList;

public:
    Composite()
    {
        setName("Composite");
    }
    ~Composite()
    {
        list<Component *>::iterator it = compList.begin();
        for (; it != compList.end(); ++it)
        {
            delete *it;
        }
    }
    void operation()
    {
        list<Component *>::iterator it = compList.begin();
        for (; it != compList.end(); ++it)
        {
            cout << (*it)->getName() << endl;
            if ((*it)->getName() == "Composite") // you need to traverse the composite inside the composite - bit of recursion 
            {
                (*it)->operation();
            }
        }
    }
    void add(Component *p)
    {
        compList.push_back(p);
    }
    void remove(Component *p)
    {
        cout << "Removing component: " << p->getName() << endl;
        compList.remove(p);
    }
    void getChild(int c) {}
};

int main()
{

    Component *composite = new Composite();
    Component *l = new Leaf();
    composite->add(l);
    l = new Leaf();
    composite->add(l);
    l = new Leaf();
    composite->add(l);
    l = new Leaf();
    composite->add(l);
    l = new Leaf();
    Component *comp2 = new Composite();
    comp2->add(l);
    comp2->add(l);
    comp2->add(l);
    comp2->add(l);
    comp2->add(l);
    composite->add(comp2);
    composite->operation();
    return 0;
}