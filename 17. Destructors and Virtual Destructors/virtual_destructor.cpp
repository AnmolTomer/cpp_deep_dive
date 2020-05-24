#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "Constructor of Base\n"; }
    // ~Base()
    virtual ~Base() // Allows us to call destructor of derived class when pointer of Base class is used to create object of derived class.
    {
        cout << "Destructor of Base" << endl;
    }
};

class Derived : public Base
{
public:
    Derived() { cout << "Constructor of Derived\n"; }
    ~Derived()
    {
        cout << "Destructor of Derived" << endl;
    }
};

void fun()
{
    // Derived d;
    Base *p = new Derived(); // From base class pointer create Derived class object in heap
    delete p;                // Delete object from heap. This will run only the destructor of derived class if base destructor is not made virtual.
}

int main()
{
    fun();
}