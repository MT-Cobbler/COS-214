#include <iostream>
using namespace std;

class Dispenser
{
private:
    Dispenser *next;

public:
    Dispenser() : next(0){};
    void add(Dispenser *n)
    {
        if (next)
        {
            next->add(n);
        }
        else
        {
            next = n;
        }
    }
    virtual void dispense(int i)
    {
        if (i > 0)
        {
            if (next)
            {
                next->dispense(i);
            }
            else
            {
                cout << "R" << i << " cannot be dispensed." << endl;
            }
        }
        else
        {
            cout << "Required amount was dispensed." << endl;
        }
    }
};

class ConcreteDispenser : public Dispenser
{
private:
    int value;

public:
    ConcreteDispenser(int v) : Dispenser(), value(v){};
    void dispense(int i)
    {   // handleRequest()
        while (i >= value)
        {   // while dispensed amount is greater than dispenser amount
            cout << "R" << value << " dispenser dispenses R" << (i -= value) << endl;
        }
        cout << "R" << i << " to small for R" << value << " dispenser - pass on" << endl;
        Dispenser::dispense(i); // call to the next dispenser
    }
};

int main(){
    Dispenser* machine = new ConcreteDispenser(200);
    machine->add(new ConcreteDispenser(100));
    machine->add(new ConcreteDispenser(50));
    machine->add(new ConcreteDispenser(20));
    machine->add(new ConcreteDispenser(10));
    
    int amount;
    cout << "Amount to be dispensed: "; cin >> amount;
    machine->dispense(amount);
    cout << endl; 
    return 0;
}