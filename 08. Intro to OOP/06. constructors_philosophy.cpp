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
    /*Rectangle() // Non parameterized constuctor.
    {           // Constructor has same name as class and they don't have any return type.
        length = 0;
        breadth = 0;
    } 
    */

    // Rectangle(int l, int b)             // Parameterized Constructor
    Rectangle(int l = 0, int b = 0) // Doing so compared to what is above is better as it eliminates use of non parameterized constructor by setting default values of l and b if no values are passed by user.
    {
        setLength(l); // Calling set length and set breadth as these functions have validation inside them
        setBreadth(b);
    }
    Rectangle(Rectangle(&rect)) // Copy constructor : We pass in another constructor as parameter.
    {
        length = rect.length;
        breadth = rect.breadth;
    }
    // As there are 3 functions with same names we can say these to be overloaded constructors. We can have many constructors.
};
int main()
{
    // Rectangle r; // Calls the non parameterized constuctor even r() can be used and sets length = 0 and breadth = 0
    Rectangle r(10, 5); // Calls the parameterized constructor and sets length and breadth as 10 and 5 respt.

    // r.setLength(5); // Not needed when you have constructor in place.
    // r.setBreadth(10); // Not needed when you have constructor in place.
    cout << r.area();
    cout << r.getLength();
    // Creating a new rectangle using copy constructor
    Rectangle r2(r); // Create r2 by sending r. By sending Rectangle object r as parameter we create another Rectangle.
    // r2 would also have length and breadth as 10 and 5 respt.
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

When we create an object of rectangle class say object r, An object of rectangle is created called l and b.
On creation of object, a function was there in the compiler which constructed the object.
Every class will have a constructor. Compiler provided built-in constuctor is called as default constructor.
Can we write our own constructor ? Yes, we can. 
There are 3 different types of user defined constructor : 
1. Non-parameterized constructor
2. Parameterized constructor
3. Copy Constuctor

If we don't write any of the 3 constuctors above then the 4th kind default constructor is provided by compiler.

COPY CONSTUCTOR : Say we went to a shop to buy a marker. On asking for marker you didn't specify brand, colour, kind etc.
                Then it is only natural tendency of shop keeper to hand over the most sold marker or most common one.
This was more like non parameterized kind of constructor.
Next day, you go to the shop specify the brand, color, kind etc. for the marker and you get that one. This is more like
parameterized constructor.

Going to shop and showing to shopkeeper hey I want a marker like the one I am holding in my hand then shopkeeper sees
the marker and gives you a copy of that marker. So this is like copy constructor. So if we have a rectangle object and
we want to create another rectangle similar to what we have already then we use copy constructor. This is taken as
by reference most of the times and not by value.

*/