/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;

void fun(int n) // Prints the int passed to the function till the value of that int is 1 or > 0.
{
    if (n > 0) // Starts with 5, checks if 5 > 0, yes then prints 5, then calls for fun(4)..again checks and goes till 1.
    {
        cout << n << endl;
        fun(n - 1);
    }
}

int main()
{
    int x = 5;
    fun(x);

    return 0;
}
/*
RECURSIVE FUNCTION : Function which makes calls to itself as per a condition. Condition is required for every
                    recursive function so that it can terminate after some calls and doesn't goes on infinitely.

*/