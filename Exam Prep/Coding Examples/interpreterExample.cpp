#include <string>
#include <map>
#include <iostream>
using namespace std;
class Context;
class Variables;
class Expression{
    public:
        Expression(void){}
        virtual ~Expression(void){}
        virtual bool evaluate(Context& c) = 0;
};

// Non terminal Expressions
class And : public Expression{
    public:
        And(Expression* l, Expression* r) : op1(l), op2(r){}
        virtual ~And(){}
        virtual bool evaluate(Context& c){
            bool op1Evalutaion = op1->evaluate(c);
            bool op2Evalutaion = op2->evaluate(c);
            return op1Evalutaion && op2Evalutaion;
        }
    private:
        Expression* op1;
        Expression* op2;
};

class Or : public Expression{
    public:
        Or(Expression* l, Expression* r) : op1(l), op2(r){
            cout << "Expressions added" << endl;
        }
        virtual ~Or(){}
        virtual bool evaluate(Context& c){
            bool op1Evalutaion = op1->evaluate(c);
            bool op2Evalutaion = op2->evaluate(c);
            return op1Evalutaion || op2Evalutaion;
        }
    private:
        Expression* op1;
        Expression* op2;
};

class Not : public Expression{
    public:
        Not(Expression* l) : op1(l){}
        virtual ~Not(){}
        virtual bool evaluate(Context& c){
            bool op1Evalutaion = op1->evaluate(c);
            return !op1Evalutaion;
        }
    private:
        Expression* op1;
};

// Terminal Expressions
class Variables : public Expression{
    public:
        Variables(const string n) : name(n){cout << "Variable " << n << " added!" << endl;}
        virtual ~Variables(){}
        virtual bool evaluate(Context& c){
            c.lookup(this->getName());
            return c.lookup(name);
        }
        string getName(){return this->name;}
    private:
        string name;
};


class Constant : public Expression{
    public:
        Constant(bool b) : op1(b){}
        virtual ~Constant(){}

        virtual bool evaluate(Context& c){
            return op1;
        }
    private:
        bool op1;
};

class Context{
   public:
        Context(){}
        ~Context(){}
        bool lookup(string l){
            if(nameValue.find(l) != nameValue.end()){
                return nameValue.find(l)->second;
            }
            return false;
        }
        void assign(Variables* e, bool s){
            nameValue[e->getName()] = s;
        }
   private: 
        map<string, bool> nameValue;
};
int main()
{
    Expression* expression;
    Context context;

    Variables* x = new Variables("X");
    Variables* y = new Variables("Y");
    Variables* z = new Variables("zValue");
    
    expression = new Or(
        new And (new Constant(true), x),
        new And (y, new Not(z)));

    context.assign(x,0);
    context.assign(y,0);
    context.assign(z,1);    
	
    bool result = expression->evaluate(context);

    cout << "Overall result is " << (result == 0 ? "false": "true") << endl;

    context.assign(x,true);
    context.assign(y,false);
    context.assign(z,true);    
    
    result = expression->evaluate(context);
    
    cout << "Overall result is " << (result == 0 ? "false": "true") << endl;

	return 0;
}
