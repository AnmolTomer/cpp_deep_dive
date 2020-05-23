#include <iostream>

using namespace std;

template <class T>
class Stack
{
private:
    T *stk;
    int top;
    int size;

public:
    Stack(int size) // Constructor
    {
        this->size = size;
        top = -1;
        this->stk = new T[size];
    }

    void push(T value); // Functions defined outside using scope resolution :: operator.
    T pop();
};

template <class T>
void Stack<T>::push(T value)
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

template <class T>
T Stack<T>::pop()
{
    T x = 0;
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

    Stack<string> s(4);
    s.push("John");
    s.push("Elliott");
    s.push("Darlene");
    s.push("Tyler");
    // s.push("Angela");
    s.pop();
    s.pop();
    s.pop();
    s.pop();
}