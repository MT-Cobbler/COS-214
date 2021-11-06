#include <iostream>

using namespace std;

class Node
{
private:
    int value;
    Node *next;

public:
    Node(int v, Node *n)
    {
        this->value = v;
        this->next = n;
    }
    ~Node()
    {
        delete next;
    }
    int getValue()
    {
        return this->value;
    }
    Node *getNext()
    {
        return this->next;
    }
};
class StackImplementor
{
public:
    StackImplementor(){};
    virtual ~StackImplementor(){};
    virtual void push(int val) = 0;
    virtual int pop() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};

class ListImplementor : StackImplementor
{
public:
    ListImplementor()
    {
        head = 0;
    };
    ~ListImplementor()
    {
        Node *curr;
        Node *prev;
        curr = head;
        while (curr)
        {
            prev = curr;
            curr = curr->getNext();
            delete prev;
        }
    };
    void push(int val)
    {
        Node *temp = new Node(val, head);
        head = temp;
    }
    int pop()
    {
        if (isEmpty())
        {
            return 0;
        }
        else
        {
            Node *temp = head;
            int val = head->getValue();
            head = head->getNext();
            delete temp;
            return val;
        }
    }
    bool isEmpty()
    {
        return head == 0;
    }
    bool isFull()
    {
        return false;
    }

private:
    Node *head;
};

class ArrayImplementor : StackImplementor
{
public:
    ArrayImplementor(int = 10)
    {
    }
    ~ArrayImplementor();
    void push(int val);
    int pop();
    bool isEmpty();
    bool isFull();

private:
    int *itemList;
    int currentItem;
    int size;
};

enum ImplementationType
{
    ARRAY,
    LIST
};

class Stack
{
public:
    Stack(ImplementationType type)
    {
        switch (type)
        {
        case ARRAY:
            stackData = (StackImplementor *)new ArrayImplementor();
        case LIST:
            stackData = (StackImplementor *)new ListImplementor();
        default:
            stackData = (StackImplementor *)new ArrayImplementor();
        }
    }
    virtual ~Stack()
    {
        delete stackData;
    }
    virtual void push(int val)
    {
        stackData->push(val);
    }
    virtual int pop()
    {
        stackData->pop();
    }
    virtual bool isEmpty()
    {
        return stackData->isEmpty();
    }
    virtual bool isFull()
    {
        return stackData->isFull();
    }

protected:
    StackImplementor *stackData;
};

class hanoiStack : public Stack
{
public:
    hanoiStack(ImplementationType = ARRAY);
    void push(int val)
    {
        if (stackData->isEmpty() || val < peek())
        {
            stackData->push(val);
        }
    }

private:
    int peek()
    {
        int value = stackData->pop();
        stackData->push(value);
        return value;
    }
};

class LIFO_Stack : public Stack
{
public:
    LIFO_Stack(ImplementationType = LIST);
    void push(int val)
    {
        if (stackData->isEmpty() || val < peek())
        {
            stackData->push(val);
        }
    }

private:
    int peek()
    {
        int value = stackData->pop();
        stackData->push(value);
        return value;
    }
};

int main()
{
    Stack *stack1 = new hanoiStack(ARRAY);
    Stack *stack2 = new LIFO_Stack(LIST);
    for (int i = 0; i, 16; i++)
    {
        int value;
        cout << i << " : ";
        cin >> value;
        stack1->push(value);
        stack2->push(value);
    }
    cout << "Array Stack: " << endl;
    for (int i = 1; i < 18; i++)
    {
        cout << stack1->pop() << "\t";
    }
    cout << "List Stack: " << endl;
    for (int i = 1; i < 18; i++)
    {
        cout << stack2->pop() << "\t";
    }
    cout << endl;
    delete stack1;
    delete stack2;
    return 0;
}