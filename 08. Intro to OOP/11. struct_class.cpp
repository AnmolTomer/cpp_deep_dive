/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
struct Demo
{
    int x, y;

    void Display()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Demo d;
    d.x = 10;
    d.y = 15;
    d.Display();
    return 0;
}
/*
Data members can't be private or protected in a structure as opposed to a class. Also in C we can't have functions inside
structures. In C++ structure is somewhat like class. Difference between the two being in class everything is private by
default, which is not the case for class. Difference being structure has everything by default as public and class has
everything by default as private.
*/