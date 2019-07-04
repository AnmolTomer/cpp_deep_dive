/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;

class Rectangle // Defining a class
{
public: // Everything inside a class if not specified becomes private.
        // Put stuff in public for direct accessibility.
    int length, breadth;
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1, r2; // Creating instances or objects from class Rectangle
    r1.breadth = 5;
    r1.length = 10;
    r2.length = 20; // Using dot operator to access variables and allocate value
    r2.breadth = 30;
    cout << "Area of r1 is : " << r1.area() << endl;
    cout << "Perimeter of r2 is : " << r2.perimeter();
    return 0;
}
