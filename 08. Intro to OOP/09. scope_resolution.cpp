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
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength() { return length; } // In-line functions
    int getBreadth() { return breadth; }
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};

int main()
{
    Rectangle r(10, 10);
    cout << "Area is " << r.area() << endl;
    if (r.isSquare())
        cout << "Yes given rectangle of length " << r.getLength() << " and breadth " << r.getBreadth() << " is a square.";
    // Automatically destructor is called and displays message.
    return 0;
}

Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(int l, int b)
{
    setLength(l);
    setBreadth(b);
}

Rectangle::Rectangle(Rectangle &rect)
{
    length = rect.length;
    breadth = rect.breadth;
}

void Rectangle::setLength(int l)
{
    if (l >= 0)
        length = l;
    else
        length = 0;
}

void Rectangle::setBreadth(int b)
{
    if (b >= 0)
        breadth = b;
    else
        breadth = 0;
}

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

bool Rectangle::isSquare()
{
    return length == breadth;
}

Rectangle::~Rectangle()
{
    cout << "Rectangle Destroyed.";
}