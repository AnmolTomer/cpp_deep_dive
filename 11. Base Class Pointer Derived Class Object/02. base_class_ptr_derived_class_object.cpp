/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
class Base
{
public:
    void fun1() { cout << "Fun1 of base." << endl; }
};

class Child : public Base
{
public:
    void fun2() { cout << "Fun2 of child." << endl; }
};
int main()
{
    /*
    Child c; // Creating an object of child class and calling both fun1 and fun2.
    c.fun1();
    c.fun2();
     */
    //-------------------------------------------------------------------------------------
    //Taking a base class pointer and assigning to it the address of child class object c.
    Child c;
    Base *ptr = &c;
    ptr->fun1();
    // ptr->fun2(); // Gives error Base class has no member fun2().
    // Here object is child class and ptr is of Base class so it has only functions of Base class accessible.

    // Trying to create a pointer to child class and pointing it to base or parent class not possible as below
    /*
    Base test_object;
    Child *ptr = &test_object; // Gives an error that a value of type base can't be used to initialize a value of type child*.
     */
    return 0;
}
// Base class pointer pointing to the child class object can only call to the functions of base class.
