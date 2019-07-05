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
    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
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
    Rectangle r1(10, 5); // 10 and 5 goes to length and breadth of function and via this gets stored in private members.
    return 0;
}
/*
It would be more readable for us to have constructor which goes like

Rectangle(int length, int breadth)
    {
        length = length;
        breadth = breadth;
    }
//The above length = length won't make sense as we don't know which length is being assigned to which variable.
To avoid ambiguity and make the name statement more clear we use this->length.
this->length is the pointer to the length which is inside private in the class. Same goes for this->breadth the breadth
pointer which is made private. And we assign the values which are being passed into the function to those.

this-> pointer is used to remove the ambiguity between parameters of functions and data members of a class.
this-> is used to refer to the data member of current class we are writing this in.
After creating the object r1 this->length is read as length of r1 and same goes for breadth.
*/