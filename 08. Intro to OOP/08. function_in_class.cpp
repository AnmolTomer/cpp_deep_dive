/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle() // Non parameterized constuctor.
    {           // Constructor has same name as class and they don't have any return type.
        length = 1;
        breadth = 1;
    }
    // Parameterized Constructor
    Rectangle(int l, int b) // Doing so compared to what is above is better as it eliminates use of non parameterized constructor by setting default values of l and b if no values are passed by user.
    {
        setLength(l); // Calling set length and set breadth as these functions have validation inside them
        setBreadth(b);
    }
    Rectangle(Rectangle &rect) // Copy constructor : We pass in another constructor as parameter.
    {
        length = rect.length;
        breadth = rect.breadth;
    }
    // Mutators / Setter methods
    void setLength(int l)
    {
        if (l >= 0)
            length = l;
        else
            length = 0;
    }
    void setBreadth(int b)
    {
        if (b >= 0)
            breadth = b;
        else
            breadth = 0;
    }
    // Accessors / Getter methods
    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }
    // Facilitators
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }

    // Inspector function
    // bool isSquare();
    //Destructor function
    // ~Rectangle();
};

int main()
{

    Rectangle r(10, 5);

    cout << "Area is : " << r.area() << endl;
    cout << "Length of Rectangle is : " << r.getLength() << endl;

    Rectangle r2(r);

    return 0;
}
/*
The functions we define above for a class these aren't mandatory but creating these in a class would lead
to creation of a perfect class. Writing these methods is just same as following pep8 for python or can be said to have
a good standard code guidelines which makes it easy for program in every way.

So our class should have the following functions in our class irrespective of need to create a perfect class :

1. Constructors
1.1 Non parameterized constructor
1.2 Parameterized constructor
1.3 Copy constructor
--------------------------------------------------------------
2. Setter or mutators
3. Accessors or Getters
4. Actual functions useful for class called Facilitators
5. Inspector function -> Checks based on some properties, mostly a bool
6. Destructor function

In a class we just write the function names and do not define the functions inside it without ellaborating.
Functions are ellaborated outside the class by using scope resolution operators.
 
*/