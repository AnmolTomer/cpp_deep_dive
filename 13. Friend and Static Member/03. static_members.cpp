/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/

#include <iostream>
using namespace std;
class Test
{
private:
    int a, b;

public:
    static int count;
    Test()
    {
        a = 10;
        b = 10;
        count++; // Doing count++ inside constructor
    }

    // Static function
    static int getCount()
    {
        // a++; // Not allowed as static function can access only static members
        // Static member function also belongs to a class.

        return count;
    }
};

int Test::count = 0; // As we want accessible inside Test only, hence we do scope resolution operator ::
// So 2 times declaration is needed for static variables. As we make global variable static accessible to objects of the class.

int main()
{
    cout << Test::getCount();
    Test t1; // Constructor called and initializes object with 10 and 10. count++ makes count to 1
    cout << t1.getCount();
    Test t2; // count++ makes count to 2
    cout << t2.getCount();
    cout << t1.count;    // Prints 2
    cout << t2.count;    // Prints 2
    cout << Test::count; // As static variable count is public .
    // Static data members can be accessed using objects as well as class name if static members are public.

    // We have created 2 object of same class and every object will have their own a and b.
}

/*To understand static, we will create one variable in public and we will do count++ inside constructor
How this works ? When we create an object of test as t1 there are a, b and count members.
On creating an object of t2 there are a,b and count as well. Count is shared by both t1 and t2.
What we want to say is that on a given memory is allocted to static members once only and both objects above
share the same memory of count static member. Thus, static variable occupies memory only once.
Static variables or static data members belongs to a class and not to an object. Objects can share it.
There is only one copy of static members and all objects share it.
t1 and t2 are having their own a and b but shared count in code above.
When there is a static member inside the class then we are supposed to declare it outside the class as well, again but
as we want it accessible only inside the test that is why we do scope resolution wrt test.
    
Like static members static functions can also be accessed using the class name with scope resolution operator.    

Conclusion :
1. Class can have static data members as well.
2. There will be only one instance which leads to memory being allocated only once.
3. All objects share that data member.
4. We can have static member functions as well to access the static members we declared as public
inside the class.
5. Static member function can only access static data members.
6. 2 times you have to declare static data members.
7. Static members can be accessed by using the object or the class with scope resolution operator.
8. If we make data member as private then we need function else we do not.

*/