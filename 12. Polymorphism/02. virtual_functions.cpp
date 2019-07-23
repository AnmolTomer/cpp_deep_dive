/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
class Parent
{
public:
    virtual void display()
    {
        cout << "Display of parent." << endl;
    }
};

class Child : public Parent
{
public:
    void display()
    {
        cout << "Display of child." << endl;
    }
};

int main()
{
    // Parent class pointer pointing to child object
    Parent *p = new Child();
    // Now using base class pointer we can call functions which are present in base class.
    p->display(); // Parent class function is called, as pointer is of Parent therefore function also is called of Parent
    // Using a Parent class pointer when we call an over rided function then Parent class function is called.
    // To execute function of child class we do the following : we make the function of Parent as virtual
}