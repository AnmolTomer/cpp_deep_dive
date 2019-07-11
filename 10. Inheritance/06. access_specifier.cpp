/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;

class Rectangle
{
private: // Data members as private
    int length;
    int breadth;

public: // Members functions as public
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    void set_length(int length)
    {
        (length > 0) ? this->length = length : this->length = 0;
    }
    void set_breadth(int breadth)
    {
        (breadth > 0) ? this->breadth = breadth : this->breadth = 0;
    }
    int get_length() { return this->length; }
    int get_breadth() { return this->breadth; }
};

int main()
{
    Rectangle r1;
    r1.set_breadth(5);
    r1.set_length(6);
    cout << "Area is : " << r1.area() << endl;
    cout << "Length is : " << r1.get_length() << endl;
    cout << "Breadth is : " << r1.get_breadth() << endl;
    return 0;
}
