#include <iostream>

using namespace std;

class StackOverFlow : exception
{
};
class StackUnderFlow : exception
{
};

class Stack
{
private:
    int *stk;
    int top = -1;
    int size;

public:
    Stack(int sz)
    {
        this->size = sz;
        stk = new int[size];
    }

    void push(int x)
    {
        try
        {
            if (top == size - 1)
                throw StackOverFlow();
            top++;
            stk[top] = x;
            cout << "Added to the stack: " << x << endl;
        }
        catch (StackOverFlow e)
        {
            cout << "Stack Overflow you have exceeded the size of stack.\n";
        }
    }

    int pop()
    {
        try
        {
            if (top == -1)
                throw StackUnderFlow();
            cout << "Popped from stack: " << stk[top] << endl;
            return stk[top--];
        }
        catch (StackUnderFlow f)
        {
            cout << "You are trying to pop from an empty stack.\n";
        }
    }
};

int main()
{
    Stack s(5);
    s.pop();
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(10);
    s.push(15);
    s.push(45);
    s.pop();
    s.pop();
}