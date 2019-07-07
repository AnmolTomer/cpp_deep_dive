/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
class parent_class
{
public:
    parent_class()
    {
        cout << "Default constructor called of class parent.\n";
    }
    parent_class(int x)
    {
        cout << "Parameterized constructor called of class parent and x = " << x << endl;
    }
};
//-------------------------------------------------------------------------------------------
class child_class : public parent_class
{
public: // Here also we write nothing but constructors
    child_class()
    {
        cout << "Default constructor called of class child.\n";
    }
    child_class(int a)
    {
        cout << "Parameterized constructor called of class child and x = " << a << "." << endl;
    }
    // to call the parameterized constructor of parent class when the object of child class is executed
    child_class(int x, int a) : parent_class(x)
    {
        cout << "Param of child class is a = " << a;
        /* What about x ? How to send the parameter to parent_class from child ? for that do :parent_class(x)
So, from child class constructor here we call the constructor of parent class which is parameterized constructor. */
    }
};
int main()
{
    // Create object of class child_class to see how the constructors are executed
    // child_class object(20); // Calls non param const of parent and param. const of child class.

    // child_class object;
    /* Created object of class child_class without parameters hence trying to call non param. contructor.
But here by default constructor of parent class non parameterized one will be executed.
We would get Default of parent_class output and then we will get Default const..... of class child_class.*/
    child_class(20, 10); // parent_class(20) and child_class(10) is called.

    return 0;
}

/*
Above we make a simple class parent_class and inside it we only write constructors of different kinds.
Whenever dealing with inheritance of classes just know that the parent class constructor will be executed first and
then child class constructor would be executed when creating object of child class.

On passing a parameter to the derived class object, we are trying to create an object using parameterized constructor
for creating object of Derived class. So, here first parent_class class default constructor will be executed first and after that
parameterized constructor of child_class is executed.

How to call the parameterized constructor of parent class when the object of child class is executed ?
For that we need to have special constructor in child class.
*/