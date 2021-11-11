#include <iostream>
#include <map>
using namespace std;

class Conversion
{
private:
    // use map structure
    map<int, string>lookUp;
public:
    string get(int k){
        // use int to access key
        return lookUp[k];
    }
    void set(int d, string m){
        // store the character
        lookUp[d] = m;
    }
};

class RomanNumber
{
public:
    RomanNumber(int n) { digit = n; }
    virtual string interpret(Conversion, Context) = 0;

protected:
    int multiplier;
    int digit;
    string interpreter(Conversion conversion)
    {
        string str = "";
        switch (digit)
        {
        case 3:
            str = str + conversion.get(1 * multiplier);
        case 2:
            str = str + conversion.get(1 * multiplier);
        case 1:
            str = str + conversion.get(1 * multiplier);
            break;
        case 4:
            str = str + conversion.get(1 * multiplier) +
                  conversion.get(5 * multiplier);
            break;
        case 8:
            str = str + conversion.get(1 * multiplier);
        case 7:
            str = str + conversion.get(1 * multiplier);
        case 6:
            str = str + conversion.get(1 * multiplier);
        case 5:
            str = conversion.get(5 * multiplier) + str;
            break;
        case 9:
            str = conversion.get(1 * multiplier) +
                  conversion.get(10 * multiplier);
            break;
        }
        return str;
    }
};

int main()
{
    return 0;
}