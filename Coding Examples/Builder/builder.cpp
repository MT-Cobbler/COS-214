#include <iostream>
#include <map>

using namespace std;

class SoftToyMachine{
    private:

    public:
        SoftToyMachine();
        ~SoftToyMachine();

        virtual void stuff(string s) = 0;
        virtual void selectBody(string s) = 0;
        void insertHeart();

        void addVoice(string s);
        void setName(string s);
};

class Mother{
    private:
        SoftToyMachine* machine;
    public:
        Mother();
        ~Mother();
        void construct();
        void setMachine(SoftToyMachine* m);
};


class Shop{
    private:
        SoftToyMachine* machine;
        string bearName;
    public:
        Shop();
        ~Shop();
        void construct();
        void setMachine(SoftToyMachine* m);
};

class CuddlyBear{
    private:
        map<string, string> part;
    public:
        CuddlyBear(string name = "Benny");
        CuddlyBear(CuddlyBear& b);
        void setPart(string key, string value);
        void show();
};

class CuddlyBearMaker : public SoftToyMachine{
    private:
        CuddlyBear* bear;
    public:
        CuddlyBearMaker();
        ~CuddlyBearMaker();
        void selectBody(string category);
        void stuff(string stuffing);
        void inserHeart();
        void AddVoice();
        void setName(string n);
        CuddlyBear* getBear();
};

int main(){

}