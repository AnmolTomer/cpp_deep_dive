/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/

#include <iostream>
#include <iomanip> // To set number of decimal in output of area and perimeter
using namespace std;
class Shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class Rectangle : public Shape
{
private:
    float length, breadth;

public:
    Rectangle(float l = 1, float b = 1)
    {
        this->length = l;
        this->breadth = b;
        // cout << this->length << endl;
        // cout << this->breadth << endl;
    }
    float area() { return this->length * this->breadth; }
    float perimeter() { return 2 * (length + breadth); }
};

class Circle : public Shape
{
private:
    float radius;

public:
    float pi = 3.1425;
    Circle(float radius = 1) { this->radius = radius; }
    float area() { return pi * this->radius * this->radius; }
    float perimeter() { return 2 * pi * this->radius; }
};

int main()
{
    Shape *s = new Rectangle(10.1656, 5.54653);
    cout << "Area of Rectangle is : " << setprecision(4) << s->area() << endl;
    // In setprecision(4) means total 4 digits i.e. 56.38 and setprecision 2 would give 56 only
    cout << "Perimeter of Rectangle is : " << setprecision(4) << s->perimeter() << endl;

    s = new Circle(10);
    cout << "Area of Circle is : " << setprecision(4) << s->area() << endl;
    cout << "Perimeter of Circle is : " << setprecision(4) << s->perimeter() << endl;
}