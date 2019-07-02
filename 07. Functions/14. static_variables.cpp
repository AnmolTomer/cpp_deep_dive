/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
void fun()
{ // Function where we declare static integer.
    static int s = 10;
    s++;
    cout << "Value of s is : " << s;
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        fun();
        cout << " On Calling function fun() for " << i << "th time." << endl;
        // We see that static keeps increasing though activation record gets deleted but not for static.
        // On removing static we get 11 everytime and it will be erased with activation record.
    }

    return 0;
}
/*
Static variables are useful inside the functions particularly in the modular or function based programming.
 */