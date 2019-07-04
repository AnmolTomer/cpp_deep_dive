/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
class Test
{
    int a;
    int *p;

public:
    Test(int x) // calling parameterized constructor.
    {
        a = x;
        p = new int[a];
    }
    Test(Test &t) // Calling copy constructor
    {
        a = t.a;
        // p = t.p; // Wrong as it would point to array of the object it is copying.
        p = new int[a]; // Deep copy constructor. Think about deep copy constructor if there is dynamic memory allocation.
        // Also have a loop to copy stuff present in object which we copy.
    }
};

int main()
{
    Test t(5);
    Test t2(t); // Create another object t2 and pass t as an argument. Hence, copy constructor called here.
    return 0;
}

/*
PROBLEM WITH COPY CONSTUCTOR : Inside main we create an object t with value as 5. t will have members a and p.
We set x as 5 and a is assigned as 5. So our t.a is 5. and p = new int[a] means new array of size a i.e. 5 is created in
heap memory and its address is stored in p. We created an object by calling parameterized constructor.

After creation of t2 memory is created for a and p. What copy constructor does is it sets a of t2 as the a value of
the argument passed to it. In this case t2.a = t.a = 5. and t2.p = t.p i.e. p of both t2 and t points to same array
in heap memory. Which is wrong as object t2 should have it's own array of size same as t.p.
Instead of creation of new array copy constructor points to the same array as of t instead of creating a new array for t2
in the heap memory. That is what the problem is about using copy constructor.
In case of dynamic memory allocation there are chances copy constructor may not create new memory for it and would just point
to the object it is copying from.
So we should write p = new int[a] inside the copy constructor too like we did for parameterized constructor.
Image reference : https://i.imgur.com/JV08a1T.png 
*/