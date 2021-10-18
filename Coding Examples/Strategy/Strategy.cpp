#include <iostream>

using namespace std;

class Strategy{
    public:
        Strategy(){
            cout << "New Strategy" << endl;
        }
        virtual ~Strategy(){}
        virtual void Sort(int *a) = 0;
};

class Context{
    protected:
        Strategy* s_;
        int* arr;
    public:
        Context(){
            cout << "Context created" << endl;
        }
        Context(Strategy* st){ this->s_ = st; }
        ~Context(){
            delete s_;
        }
        void setStrategy(Strategy* st){
            delete s_;
            this->s_ = st;
        }
        void perform(){
            // declare array to sort
            arr = new int[5];
            arr[0] = 5;
            arr[1] = 1;
            arr[2] = 6;
            arr[3] = 2;
            arr[4] = 4;
            this->s_->Sort(arr);
        }
};


class ConcreteStrategyA : public Strategy{
    public:
        ConcreteStrategyA(){
            cout << "Selection Sort" << endl;
        }
        ~ConcreteStrategyA(){}
        void Sort(int *a){
            // this is the overridden method
            for (int i = 0; i < 5; i++)
            {
                cout << a[i] << " ";
            }
        
            cout << endl;
            int smallest = 0;
            for (int i = 0; i < 4; i++)
            {
               // iterate through array
               smallest = i;
               for(int j = i + 1 ; j < 5 ; j++){
                   if(a[j] < a[smallest]){
                       //swap
                       int temp = a[j];
                       a[j] = a[smallest];
                       a[smallest] = temp;
                   }
               }
            }
            for(int i = 0 ; i  < 5 ; i++){
                cout << a[i] << " ";
            }
            // return a;
        }
};

class ConcreteStrategyB : public Strategy{
    public:
        ConcreteStrategyB(){
            cout << "Bubble Sort" << endl;
        }
        ~ConcreteStrategyB(){}
        void Sort(int *a){
            for (int i = 0; i < 5; i++)
            {
                cout << a[i] << " ";
            }
        
            cout << endl;
            // this is the overridden method
            for(int j = 0 ; j < 5; j++){
                for(int i = 0 ; i < 4 ; i++){
                    if(a[i] > a[i+1]){
                        //swap
                        int temp = a[i];
                        a[i] = a[i+1];
                        a[i+1] = temp;
                    }
                }
            }
            for(int i = 0 ; i  < 5 ; i++){
                cout << a[i] << " ";
            }
            // return a;
        }
};

int main(){
    Context* con = new Context();
    con->setStrategy(new ConcreteStrategyA());
    con->perform();
    cout << endl;
    con->setStrategy(new ConcreteStrategyB);
    con->perform();
    cout << endl;
    return 0;
}