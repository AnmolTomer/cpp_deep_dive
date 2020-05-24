#include <iostream>

using namespace std;

class Demo
{
    int *p;

public:
    Demo()
    {
        p = new int[10];
        cout << "Constructor of Demo" << endl;
    }
    ~Demo()
    {
        delete[] p; // To prevent deleting of class but memory of array not deleted from heap. Specify all resources to remove here.
        cout << "Destructor of Demo" << endl;
    }
};

void func()
{
    // Demo d; // Constructor and Destructor both are called.
    Demo *p = new Demo(); // Only constructor is called, when we create an object dynamically in the heap.
    delete p;             // When dealing with dynamic objects via pointers delete them by doing `delete p`
}

int main()
{
    func();
}