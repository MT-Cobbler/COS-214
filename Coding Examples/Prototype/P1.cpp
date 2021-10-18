#include <iostream>

using namespace std;

class Prototype{
   // shape
   public:
      Prototype(){}
   protected:
      int length; int width;
      Prototype* clone();
      virtual ~Prototype(){}
};

class PManager{

};

class Context{

};

class CPrototype1{
   // square
};

class CPrototype2{
   // rectangle
};


int main(){

   return 0; 
}