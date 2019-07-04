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
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
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
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
};
int main()
{
    Rectangle r;
    r.setLength(5);
    r.setBreadth(10);
    cout << r.area();
    cout << r.getLength();
    return 0;
}

/*
CONSTRUCTOR : Above we have a class with accessor and mutator present. Now we create an object of rectangle called r.
Object of rectangle class r is created with length and breadth and functions of get, set associated with it.
Now, try and understand the problem here. We have object r with length and breadth and there are no values in it right
now as we didn't initialize any values so garbage values. We call r.setLength and r.setBreadth functions to set length
and breadth of the object. So it appears we call the function and it sets the value in the object what we pass.

Philosophically this is wrong as before setting the length and breadth to rectangle object also we might have had
default values of length and breadth of the object created. Yes by default also it had some specified values.
Just as we can't get a car after booking which has no color similarly we need to have already specific defined
values for our objects as per OOP philosophy. Just like we specify car color at the time of booking similarly
when we create an object of rectangle then and there only at the time of its construction only we can pass length and
breadth of the object or parameters of the objects can be passed onto just like we pass parameters' values in a function.
This is done to avoid setL and setB for the first time. We can use mutator to modify if we need it afterwards but for the
first time when we create the object we should be able to set parameters like length and breadth instantly.

So here we are planning to call a function which is automatically called when the object is created off of a class.
So, here we see type of constructors and how to write constructors.
*/