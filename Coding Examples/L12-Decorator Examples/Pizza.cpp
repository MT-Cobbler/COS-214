//
//  Pizza.cpp
//  
//
//  Created by Linda Marshall on 2017/08/20.
//
//
#include <iostream>

using namespace std;
// Component = Rocket
class Pizza {
public:
    Pizza() {
        cost = 0.0;
    };
    virtual void add(Pizza*) = 0;
    virtual double total() = 0;
    void setCost(double cost) {
        this->cost = cost;
    };
    double getCost() {
        return cost;
    };
    virtual ~Pizza() {} ;
private:
    double cost;
};
// 
class PizzaBase : public Pizza {
public:
    PizzaBase() {};
    virtual void add(Pizza*) {};
    virtual double total() {
        return getCost();
    };
    ~PizzaBase() {};
};
// Different Rockets
class ThinPizzaBase : public PizzaBase {
public:
    ThinPizzaBase() {
        cout << "Creating a thin base" << endl;
        setCost(15.00);
    };

};
// Different Rockets
class ThickPizzaBase : public PizzaBase {
public:
    ThickPizzaBase() {
        cout << "Creating a thick base" << endl;
        setCost(25.00);
    };
};
// Decorator
class PizzaTopping : public Pizza {
public:
    PizzaTopping() {
        topping = 0;
    };
    virtual double total() {
        // cout << "In PizzaTopping total" << endl;
        if (topping == 0) {
            return getCost();
        } else {
          return getCost() + topping->total();
        }
    };
    virtual void add(Pizza* pizzaTopping) {
        cout << "In PizzaTopping add" << endl;
        if (topping == 0){
            topping = pizzaTopping;
        } else {
            topping->add(pizzaTopping);
        }

    };
protected:
    ~PizzaTopping() {delete topping; };
private:
    Pizza* topping;
};
// ConcreteDecorators
class TomatoTopping : public PizzaTopping {
public:
    TomatoTopping() : PizzaTopping() {
        cout << "Creating tomato topping" << endl;
        setCost(5.00);
    };
    ~TomatoTopping() {};
};
// ConcreteDecorators
class MozerallaTopping : public PizzaTopping {
public:
    MozerallaTopping() : PizzaTopping() {
        cout << "Creating Mozeralla topping" << endl;
        setCost(10.00);
    };
    ~MozerallaTopping() {};
};
// ConcreteDecorators
class HamTopping : public PizzaTopping {
public:
    HamTopping() : PizzaTopping() {
        cout << "Creating ham topping" << endl;
        setCost(15.00);
    };
    ~HamTopping() {};
};


int main() {
    Pizza* myPizza;
    myPizza = new TomatoTopping();
    myPizza->add(new MozerallaTopping());
    myPizza->add(new HamTopping());
    myPizza->add(new HamTopping());
    myPizza->add(new ThickPizzaBase());
    cout << "Cost = " << myPizza->total() << endl;

    
    delete myPizza;
    
    return 0;
}

/* Program output:
 
 Creating tomato topping
 Creating Mozeralla topping
 In PizzaTopping add
 Creating ham topping
 In PizzaTopping add
 In PizzaTopping add
 Creating ham topping
 In PizzaTopping add
 In PizzaTopping add
 In PizzaTopping add
 Creating a thick base
 In PizzaTopping add
 In PizzaTopping add
 In PizzaTopping add
 In PizzaTopping add
 Cost = 70
 
 */

