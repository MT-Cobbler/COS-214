#include <iostream>
using namespace std;
class LoveBaby
{ // Handler

public:
    LoveBaby() {}
    virtual ~LoveBaby() {}
    virtual void handleRequest(string s) = 0;
    virtual void setNext(LoveBaby *n) = 0;
};

class Granny : public LoveBaby
{
private:
    LoveBaby *next;

public:
    Granny() { next == nullptr; }
    ~Granny() { delete next; }
    void setNext(LoveBaby *n)
    {
        this->next = n;
    }
    void handleRequest(string s)
    {
        if (s == "love" || s == "Love")
        {
            cout << "Granny will love the baby. <3" << endl;
        }
        else
        { // next in chain must handle the request
            this->next->handleRequest(s);
        }
    }
};

class Mom : public LoveBaby
{
private:
    LoveBaby *next;

public:
    Mom() { next == nullptr; }
    ~Mom() { delete next; }
    void setNext(LoveBaby *n)
    {
        this->next = n;
    }
    void handleRequest(string r)
    {
        if (r == "change")
        {
            cout << "Mom will change the baby :(" << endl;
        }
        else
        {
            this->next->handleRequest(r);
        }
    }
};

class Dad : public LoveBaby
{
private:
    LoveBaby *next;
public:
    Dad() { next == nullptr; }
    ~Dad() { delete next; }
    void setNext(LoveBaby *n)
    {
        this->next = n;
    }
    void handleRequest(string r)
    {
        if (r == "feed" || r == "food")
        {
            cout << "Dad will feed the baby :o" << endl;
        }
        else
        {
            this->next->handleRequest(r);
        }
    }
};

class Client
{
protected:
    LoveBaby *g;
    LoveBaby *m;
    LoveBaby *d;

public:
    Client()
    {
        g = new Granny();
        m = new Mom();
        d = new Dad();
        g->setNext(m);
        m->setNext(d);
    }
    ~Client()
    {
        delete g;
        delete m;
        delete d;
    }
    void executeRequest(string r)
    {
        g->handleRequest(r);
    }
};

int main()
{
    Client *manageBaby = new Client();
    manageBaby->executeRequest("feed");
    manageBaby->executeRequest("love");
    manageBaby->executeRequest("change");
    return 0;
}