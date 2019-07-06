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
    Rectangle(int length = 0, int breadth = 0);
    Rectangle(Rectangle &r);
    int get_length() { return length; }
    int get_breadth() { return breadth; }
    void set_length(int length);
    void set_breadth(int breadth);
    int area();
    int perimeter();
};

class Cuboid : public Rectangle // Inherit publicly from class Rectangle to class Cuboid
{
private:
    int height;

public:
    Cuboid(int length = 0, int breadth = 0, int height = 0)
    {
        set_length(length);   // To read and write the values of class we inherit as data members are private what we do is-
        set_breadth(breadth); //call the methods for setting the values and reading them.
        this->height = height;
    }
    int get_height() { return this->height; }
    void set_height(int height);
    int volume();
    // To print cout << c for an object c of class Cuboid we do the operator overloading via friend function as below:
    friend ostream &operator<<(ostream &os, Cuboid &object);
};

int main() // Main function and calls after object creation
{
    Cuboid c(10, 5, 3);
    cout << "Length of object c from Class Cuboid is : " << c.get_length() << endl; // Without operator overloading.
    cout << "Breadth of object c from Class Cuboid is : " << c.get_breadth() << endl;
    cout << "Height of object c from Class Cuboid is : " << c.get_height() << endl;
    cout << "Volume of cuboid c is : " << c.volume() << endl;
    cout << "Area from rectangle class on cuboic c = length times breadth is : " << c.area() << endl;
    cout << "\nDisplaying parameters of cuboid by using operaotor overloading gives following : " << endl;
    cout << c;
    // To display cuboid by cout << c then we would have to overload the operator inside the class cuboid.
    return 0;
}

// Class functions

ostream &operator<<(ostream &os, Cuboid &object)
{
    os << "Length of cuboid is : " << object.get_length() << endl;
    os << "Breadth of cuboid is : " << object.get_breadth() << endl;
    os << "Height of cuboid is : " << object.get_height() << endl;
}
int Cuboid::volume()
{
    return get_length() * get_breadth() * get_height();
}
void Cuboid::set_height(int height)
{
    if (height >= 0)
        this->height = height;
    else
        this->height = 0;
}

Rectangle::Rectangle(int length, int breadth)
{
    set_length(length);
    set_breadth(breadth);
}

Rectangle::Rectangle(Rectangle &rect)
{
    this->length = rect.length;
    this->breadth = rect.breadth;
}

void Rectangle::set_length(int length)
{
    if (length >= 0)
        this->length = length;
    else
        this->length = length;
}
void Rectangle::set_breadth(int breadth)
{
    if (breadth >= 0)
        this->breadth = breadth;
    else
        this->breadth = breadth;
}

int Rectangle::area()
{
    return this->length * this->breadth;
}

int Rectangle::perimeter()
{
    return 2 * (this->length + this->breadth);
}

/*
Inheritance : One of the important features of OOP. Acquiring the features of existing class into
                a new class is inheritance, i.e. deriving a class from existing class.
Example in automobile engineering, a car company designs a car and based on the design,
company manufactures a car. Now engineers work on the design and based on it many cars are made.
When working on a new car, same features are carried on to a new design and on that some extra
features are added. Resulting in a new car with some new features is made and process repeats itself.
This was an example of inheritance, acquiring the features of an existing design into a new design.

Say, in programming we also want the same for class Rectangle. So maybe we want same features
as rectangle with added feature of height for cuboid. We can do so by adding height.

We can make class Cuboid which extends from class Rectangle and this allows cuboid class to
call whatever there is inside class Rectangle. This allows us to achieve reusability in programming.

Reference : https://i.imgur.com/ZXmF7vC.png
*/