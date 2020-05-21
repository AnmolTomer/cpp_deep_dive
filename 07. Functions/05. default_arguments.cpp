/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
/*
// The hard way to addition by function overloading
int add(int x, int y)
{
    return x + y;
}
// Overloaded functions with different number of arguments.
int add(int x, int y, int z)
{
    return x + y + z;
}
*/

// Easy way via default argument passing
int add(int x, int y, int z = 0) // Here we set var we are unsure of user would give or not as 0 by default
{
    return x + y + z; // Assigned default value gets changed if user ever enters 3 parameters.
}

int max(int a, int b, int c = 0)
{
    return a > b && a > c ? a : (b > c ? b : c); // Says if a>b and a>c ? return a : else check (b>c ? return b : else return c)
}

int main()
{
    /*
    int c = add(2, 5); // Calls first function
    c = add(2, 5, 8);  // Almost same, just adds one more integer.
    // What if we did
    c = add(2, 5, 0); // Same as function 1 right ? Yes, will call and give result same as function 1
    */
    cout << "Sum with 2 parameters and third being default arg. = 0 is :" << add(2, 836) << endl;
    cout << "Sum with 3 parameters is : " << add(25, 66, 96) << endl;
    cout << "Max of 3 integers is " << max(26, 13, 56) << endl;
    cout << "Max with 2 integers and third being by default 0 is " << max(10, 20) << endl;
    return 0;
}

/*
Here we learn about default arguments. Above are 2 functions with number of parameters being different.

If we are ready to pass the third argument as zero then we do not need 1st function. 
Can we combine 2 functions into 1 ? Yeah use default argument.
Using default argument we can eliminate function overloading for cases where datatype remains same but new function of
same name is being written with only difference that being of number of parameters being passed. Instead set the parameters
which you are unsure of use would pass or not as default inside the function.
Try making the last parameters as default and not the first ones as most probably those would be supplied by user,
the first arguments.

Default argument can greatly replace what function overloading does for the case where everything stays same between
2 functions except the number of parameters of same datatype.
*/