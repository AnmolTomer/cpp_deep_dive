#include <iostream>
using namespace std;

// class Parent // Works without any error if we use this, but on marking Parent:final class Child is not able to inherit that Parent class no more. Final is used to restrict inheritance.
class Parent //: final
{
    // Only virtual functions are allowed to be marked as final
    virtual void show() final
    {
        cout << "Parent Final";
    }
};

class Child : Parent
{
    // As parent class is inherited so we are not allowed to define show() as virtual function is marked as final in class Parent
    // Final functions of parent class can't be overrided in child Class.
    // Final keyword used to restrict inheritance as well as overriding of functions.
    /*
    void show()
    {
        
    }
    */
};

int main()
{
}