#include <iostream>
#include <vector>
using namespace std;

class Product{
    public:
        vector<string> parts;
        void ListParts(){
            cout << "Product parts:";
            vector<string>::iterator it = parts.begin();
            for( ; it != parts.end(); ++it){
                if(it == parts.end()){
                    cout << *it << endl;
                }
                else{
                    cout << (*it) << ", ";
                }
            }
            cout << endl;
        }
};

class Builder{
    public:
        virtual ~Builder(){}
        virtual void BuildA() = 0;
        virtual void BuildB() = 0;
        virtual void BuildC() = 0;
        virtual Product* getProduct() = 0;
};

class ConcreteBuilder : public Builder{
    private:
        Product* product;
    public:
        ConcreteBuilder(){
            this->Reset();
        }
        ~ConcreteBuilder(){delete product;}
        void Reset(){
            this->product = new Product();
        }
        void BuildA(){
            this->product->parts.push_back("PartA");
        }
        void BuildB(){
            this->product->parts.push_back("PartB");
        }
        void BuildC(){
            this->product->parts.push_back("PartC");
        }
        Product* getProduct(){
            Product* result = this->product;
            this->Reset();
            return result;
        }
};

class Director{
    private:
        Builder* builder;
    public:
        Director(Builder* b) : builder(b){}
        void BuildMinimalProduct(){
            this->builder->BuildA();
        }
        void BuildMaxProduct(){
            this->builder->BuildA();
            this->builder->BuildB();
            this->builder->BuildC();
        }
};

int main(){
    Builder* newB = new ConcreteBuilder();
    Director* newD = new Director(newB);
    newD->BuildMaxProduct();
    newB->getProduct()->ListParts(); 
    newD->BuildMinimalProduct();
    newB->getProduct()->ListParts();
}