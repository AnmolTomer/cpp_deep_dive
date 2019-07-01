/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    cout << "Value of actual parameters x and y before swap(x,y) :\nx = " << x << "\ty = " << y << endl;
    cout << "Address of actual parameters x and y before swap(x,y) :\nx = " << &x << "\ty = " << &y << endl;
    swap(x, y);
    cout << "Output of actual parameters after swap(x,y) :\nx = " << x << "\ty = " << y << endl; // Aww yeah! Swap happens.
    cout << "Address of actual parameters x and y after swap(x,y) :\nx = " << &x << "\ty = " << &y << endl;
    return 0;
}

/*
References are nickname to a variable and has to be initialized at the declaration time and can't be null.

We do very minor changes to the code and it is almost same as if it was call by value code.
We do not make any changes where we call the function inside main. 
Instead in the function definition we take in int &a i.e. reference variables instead of int variables.

Syntax is same as call by value only at the definition of the function we use & ampersand.
In call by reference changes can be done to actual parameters.

Due to & being used i.e. reference variables being taken in function definition when we pass x and y inside main
to the function new activation record is not created instead x and y are also identified by the name a and b at memory
&x and &y.

When we use call by reference what happens at machine code generation phase is that where we call swap function
inside the main there machine code of swap function will be copied. Machine code of function will be copied
inside the main function at the place of function call. It becomes part of main function and as a result during
call by reference even if it seems another function directly modifying main function in reality before that happens
another function becomes a part of main function.
Temp is also created in the activation record of the main function itself and will be there as long as the swap
funcion code is being executed.

Use call by reference when you want actual parameters to be modified.
Loops inside call by references can lead to warnings as perfect copying of code by compiler might not happen.
Using call by reference makes the function being called as in-line function.
*/