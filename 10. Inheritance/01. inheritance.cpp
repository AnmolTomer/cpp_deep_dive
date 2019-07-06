/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        cout << "Display function called of class Base." << endl;
    }
};

class Derived : public Base // Publicly inheriting from class base to new class derived.
{
public:
    void show()
    {
        cout << "Show of derived." << endl;
    }
};

int main()
{
    Base b;
    cout << "On calling display through object of class base gives us : " << endl;
    b.display();
    Derived d;
    cout << "On calling display through object of derived base gives us : " << endl;
    d.display();
    cout << "On calling show function of derived class through object of class derived gives us : " << endl;
    d.show();
    return 0;
}
