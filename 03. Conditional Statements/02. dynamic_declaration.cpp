/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5;
    /*if (true)
    {
        int c = a + b;
        cout << c << endl;
    }
        // cout << c; //Gives an error saying identifier is undefined.
     */

    // When we do not need a variable throughout the program but only to check a condition

    /*We can either create an empty block and enclose the variable we want to limit in scope using {} - A Dummy Block

*/

    if (int c = a + b; c > 10) // Available only in C++ 17.
    {
        cout << "Sum is greater than 10.\n";
    }

    return 0;
}

/*
C++ allows declaration of variables as per our needs within a specified scope or throughout the program that's our choice.
In C we were supposed to declare all the variables in the beginning of a program at one place.
In above example based on some if condition we declare c and use it to print sum and outside the {} c variable won't exist.
*/
