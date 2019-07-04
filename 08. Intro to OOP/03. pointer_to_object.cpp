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

    /*
    // Using arrow operator
    
    Rectangle r;  // Creating instances or objects from class Rectangle in stack section
    Rectangle *p; // Pointer
    p = &r;       // Pointer pointing on rectangle object r
    // r.breadth = 5; // Normal way to access variables of object
    // r.length = 10;
    p->length = 10; // Pointer way to acess variables of object using Arrow operator
    p->breadth = 5;
    // cout << "Area of r is : " << r.area() << endl; // Normal way
    // cout << "Perimeter of r is : " << r.perimeter();
    cout << "Area of r is : " << p->area() << endl;   // Using arrow -> operator, instead of * we can use arrow
    cout << "Perimeter of r is : " << p->perimeter(); // Arrow operator can be used to access data members and functions too.
    
    */
    // Creating an object in heap - Dynamic Object in Heap
    Rectangle *p;
    p = new Rectangle; // p points to new object created in heap.
    // Doing it in one line
    Rectangle *q = new Rectangle; // Another object created in heap
    // Assigning value to objects in heap using arrow operator
    p->length = 5;
    p->breadth = 10;
    cout << "Area of r is : " << p->area() << endl;
    cout << "Perimeter of r is : " << p->perimeter() << endl;

    return 0;
}

/*
Here we see how to have pointer on an object, and how to create objects in stack and heap memory.

In JAVA objects can't be created in heap and are always created in heap using new.
C++ gives option to programmer based on where you want object to be created.
*/