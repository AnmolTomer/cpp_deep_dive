#include <iostream>

using namespace std;

class Stack
{
private:
    int *stk;
    int top;
    int size;

public:
    Stack(int size) // Constructor
    {
        this->size = size;
        top = -1;
        this->stk = new int[size];
    }

    void push(int value); // Functions defined outside using scope resolution :: operator.
    int pop();
};

void Stack::push(int value)
{
    if (top == size - 1)
    {
        cout << "Stack is full.\n";
    }
    else
    {
        top++;
        stk[top] = value;
        cout << "Added to the stack: " << value << endl;
    }
}

int Stack::pop()
{
    int x = 0;
    if (top == -1)
        cout << "Stack is empty.\n";
    else
    {
        x = stk[top];
        top--;
        cout << "Popped: " << x << "\n";
    }
    return x;
}

int main()
{
    Stack s(4);
    s.push(4);
    s.push(9);
    s.push(8);
    s.push(5);
    s.push(7);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
}