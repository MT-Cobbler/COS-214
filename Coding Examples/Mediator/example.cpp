#include <iostream>
#include <string>
/**
 * The Mediator interface declares a method used by Colleagues to notify the
 * mediator about various events. The Mediator may react to these events and
 * pass the execution to other Colleagues.
 */
class Colleague;
class Mediator
{
public:
    virtual void Notify(Colleague *sender, std::string event) const = 0;
};

/**
 * The Base Colleague provides the basic functionality of storing a mediator's
 * instance inside Colleague objects.
 */
class Colleague
{
protected:
    Mediator *mediator_;

public:
    Colleague(Mediator *mediator = nullptr) : mediator_(mediator)
    {
    }
    void set_mediator(Mediator *mediator)
    {
        this->mediator_ = mediator;
    }
};

/**
 * Concrete Colleagues implement various functionality. They don't depend on
 * other Colleagues. They also don't depend on any concrete mediator classes.
 */
class Colleague1 : public Colleague
{
public:
    void DoA()
    {
        std::cout << "Colleague 1 does A.\n";
        this->mediator_->Notify(this, "A");
    }
    void DoB()
    {
        std::cout << "Colleague 1 does B.\n";
        this->mediator_->Notify(this, "B");
    }
};

class Colleague2 : public Colleague
{
public:
    void DoC()
    {
        std::cout << "Colleague 2 does C.\n";
        this->mediator_->Notify(this, "C");
    }
    void DoD()
    {
        std::cout << "Colleague 2 does D.\n";
        this->mediator_->Notify(this, "D");
    }
};

/**
 * Concrete Mediators implement cooperative behavior by coordinating several
 * Colleagues.
 */
class ConcreteMediator : public Mediator
{
private:
    Colleague1 *Colleague1_;
    Colleague2 *Colleague2_;

public:
    ConcreteMediator(Colleague1 *c1, Colleague2 *c2) : Colleague1_(c1), Colleague2_(c2)
    {
        this->Colleague1_->set_mediator(this);
        this->Colleague2_->set_mediator(this);
    }
    void Notify(Colleague *sender, std::string event) const override
    {
        if (event == "A")
        {
            std::cout << "Mediator reacts on A and triggers following operations:\n";
            this->Colleague2_->DoC();
        }
        if (event == "D")
        {
            std::cout << "Mediator reacts on D and triggers following operations:\n";
            this->Colleague1_->DoB();
            this->Colleague2_->DoC();
        }
    }
};

/**
 * The client code.
 */

void ClientCode()
{
    Colleague1 *c1 = new Colleague1;
    Colleague2 *c2 = new Colleague2;
    ConcreteMediator *mediator = new ConcreteMediator(c1, c2);
    std::cout << "Client triggers operation A.\n";
    c1->DoA();
    std::cout << "\n";
    std::cout << "Client triggers operation D.\n";
    c2->DoD();

    delete c1;
    delete c2;
    delete mediator;
}

int main()
{
    ClientCode();
    return 0;
}