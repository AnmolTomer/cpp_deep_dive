/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
int &fun(int &x) // Writing a function which returns the reference
{
    /*int x = 10;
    return x; // return by reference. Gives warning that local variable of function can't be returned as it's activation
    // record would be deleted when the function ends. It would cease to exist. So its reference can't be returned.
    // Reference can't be used to point to heap memory too. So how is it useful then...? 
    */

    return x;
}
using namespace std;
int main()
{
    int a = 10;
    fun(a) = 25;
    cout << a << endl;
    return 0;
}

/*
Suppose we have a local variable in the main function named a with value 10, then we can call the function fun
and we would pass the value a. We make the function fun take the reference variable x.

When we have return by reference  & then x variable will comeback where we call function as fun(a) and entire function
becomes a reference. It will be a reference to local variable of main a. Main has a, a sent to function as x and x is
reference to a. Here we take parameter as reference and return the same as a reference.
*/