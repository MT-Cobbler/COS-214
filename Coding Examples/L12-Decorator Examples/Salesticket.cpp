#include <iostream>

using namespace std;

class Component {
  public:  
    virtual void printTicket() = 0;
	virtual ~Component() {};
};

class SalesTicket: public Component {
  public:
    void printTicket();
	virtual ~SalesTicket() {};
};

void SalesTicket::printTicket() {
  cout<<"List of items purchased"<<endl;
}

class SomeClass: public Component {
  public:
    virtual void printTicket();
    SomeClass(Component* myC);
	  // Need to add a destructor - MUST be virtual
	  virtual ~SomeClass();
  private:
    Component *myComp;
};



SomeClass::SomeClass(Component* myC) {
  myComp = myC;
}

void SomeClass::printTicket() {
  if (myComp)
    myComp->printTicket();
}

SomeClass::~SomeClass(){
	delete myComp;
}

class Header1: public SomeClass {
  public:
    Header1(Component* c);
    void printTicket();
};

Header1::Header1(Component* c) : SomeClass(c) { }

void Header1::printTicket() {
  cout<<"Welcome to the Crazy Zone"<<endl;
  SomeClass::printTicket();
}


class Header2: public SomeClass {
  public:
    Header2(Component* c);
    void printTicket();
};

Header2::Header2(Component* c) : SomeClass(c) { }

void Header2::printTicket()
{
  cout<<"Shopping at the Crazy Zone"<<endl;
  SomeClass::printTicket();
}


class Footer1: public SomeClass {
  public:
    Footer1(Component* c);  
    void printTicket();
};

Footer1::Footer1(Component* c) : SomeClass(c) { }

void Footer1::printTicket() {
  SomeClass::printTicket();
  cout << "It was a pleasure doing" <<
          " business with you"<<endl;
}

class Footer2: public SomeClass {
  public:
    Footer2(Component* c);
    void printTicket();
};

Footer2::Footer2(Component* c) : SomeClass(c) { }

void Footer2::printTicket() {
  SomeClass::printTicket();
  cout << "Enjoy your day"<<endl;
}

class SalesOrder {
  public:
    SalesOrder(Component*);  
    void printTicket();
    ~SalesOrder();
  private:
    Component* order;  
};




SalesOrder::SalesOrder(Component* c) : order(c) {}
    
void SalesOrder::printTicket() {
  order->printTicket();
}

SalesOrder::~SalesOrder(){
    delete order;
}

int main() {
   
    SalesOrder* s = new SalesOrder(new Footer1(
                           new Header1(
                           new SalesTicket)));
			// Note: SalesTicket is being decorated.
	
    s->printTicket();

    // Destruct all relevant objects
    delete s;
	
	return 0;
}

/*
 Example of output:
 
 Welcome to the Crazy Zone
 List of items purchased
 It was a pleasure doing business with you
 
 */
