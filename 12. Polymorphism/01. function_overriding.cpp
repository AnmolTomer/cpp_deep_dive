/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
class Parent
{
public:
    void display()
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
    Child c;
    c.display();
    c.Parent::display(); // To call display function of Parent
    return 0;
}

/*
If we create object of Parent and call the function then function of parent will be called,
if we create the function with same name in the child class and even if child inherits the
parent publicly even then the function of child object will be called even though parent
has the function with same name as the class child. Writing the function with same name
is function overriding. Already parent class has a function and child class inherits from parent
and borrows that function but is redefining the function itself, in a way as if it's their own
version.

In function overriding signature or prototype of the function stays same while there is a change in parameters in case
of function overloading.
*/