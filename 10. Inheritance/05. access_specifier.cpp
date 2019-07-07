/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
class Parent
{
private:
    int a;

protected:
    int b;

public:
    int c;
    void fun_parent()
    {
        this->a = 10;
        this->b = 20;
        this->c = 30;
    }
};

class Child : Parent
{
public:
    void fun_derived()
    { // Function which accesses members of parent but can access protected not private.
        //When we say Child is inherited from Parent then all members are available here as well of parent.
        b = 2;
        c = 3;
        // Private is available but not accessible through child, public and protected are accessible via child too in a class.
    }
};

int main()
{
    Parent x; // x initialized with data members a,b and c. Out of these 3 we can directly only access c as it is public.
    // for a and b all read and write options needs to be done through public functions in the class.

    return 0;
}
/*
Public, private and protected are access specifiers in C++.
Above we create a parent class with members of all 3 kinds of access specifiers. We have a function which is assigning
values to the variables declared.
So, idea behind making only public accessible in an object is that when making an object and as programmer
we want some stuff not to be interfered with, components which are crucial for working of code we set them as private.
When programmer wants to allow others to modify or access something then we set it as public or protected.

Say one of the program is given directly to a client. That is object was made from our design class and we do not
want user to interfere with internal mechanisms and provide user just barebone so that all his functionalities are 
accessible to him and nothing else. So we set those things as public. Like in a TV we do not allow directly circuit
to be interfered with rather we have functions for volume or channel change just like that we make selective stuff
which we want intentionally for user to get his/her hands on as public rest is kept out of the access when it is an object
that is given to user.

For reference : https://i.imgur.com/CVKqCtm.png
*/