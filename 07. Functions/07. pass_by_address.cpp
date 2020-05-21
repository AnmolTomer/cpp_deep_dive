/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a; // Data of x is stored in a temp variable.
    *a = *b;   // Data of y is now stored in data of x
    *b = temp; // Data of x now being stored into y which was stored in temp in step 1.
    cout << "Addresses of formal parameters a and b after swap(a,b) :\na = " << a << "\tb = " << b << endl;
    cout << "Values of formal parameters a and b after swap(a,b) :\na = " << *a << "\tb = " << *b << endl;
}

int main()
{
    int x = 10, y = 20;
    cout << "Value of actual parameters x and y before swap(x,y) :\nx = " << x << "\ty = " << y << endl;
    cout << "Address of actual parameters x and y before swap(x,y) :\nx = " << &x << "\ty = " << &y << endl;
    swap(&x, &y);
    cout << "Output of actual parameters after swap(x,y) :\nx = " << x << "\ty = " << y << endl; // Aww yeah! Swap happens.
    cout << "Address of actual parameters x and y after swap(x,y) :\nx = " << &x << "\ty = " << &y << endl;
    return 0;
}

/*
Here we have same code as 06. # but with some changes.
In the function here we do not send the variable x and y to swap rather we send the address of x and y to swap.
As we know that the address as value can only be stored by pointers so we make formal parameters as pointers in function
definition above.

This makes formal parameters as pointers to store address values and actual parameters passing their addresses to function.
a is a pointers to x and b is a pointer to y. We won't be swapping the addresses but rather we swap the data inside
the function definition above main.
a has address of x and b has address of y.
*a means data of x. We do the swapping and due to formal parameters being pointers we swap or modify the actual parameters
and finally swapping happens properly.
One function cannot access the variables of other functions that is precisely the reason why we do so using pointers.
Pointer gives power to a function to access the parameters of the calling function.
Swap function changes the values of x and y  and swapping occurs.
If we want to modify the actual parameters then we should go for call by address mechanism.

*/