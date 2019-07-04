/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;

class Rectangle // Defining a class
{
private:
    int length, breadth; // Direct access using objectName.dataMember is not allowed if you put variables in private

public:
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    // Making data accessible through functions
    void setLength(int l) // Mutator
    {
        if (l >= 0) // Validation code
            length = l;
        else
            length = 1;
    }
    void setBreadth(int b) // Mutator
    {
        if (b >= 0) // Validating the input
            breadth = b;
        else
            breadth = 1; // Assign length or breadth as 1 if input is found to be negative.
    }
    int getLength() // Accessor
    {
        return length;
    }
    int getBreadth() // Accessor
    {
        return breadth;
    }
};

int main()
{
    Rectangle r; // Creating instances or objects from class Rectangle
    r.setLength(5);
    r.setBreadth(10);

    cout << "Area of r is : " << r.area() << endl;
    cout << "Perimeter of r is : " << r.perimeter();
    return 0;
}

/*


*/