/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;

// global variable
int x = 10;

int main()
{
    int x = 20; // Local to main function
    {
        int x = 30;                                                  // Local within scope, c++ has block level scope
        cout << "Output of x inside {} inside main : " << x << endl; // Gives output 30, i.e. nearest x value
    }
    cout << "Output of x outside {} but inside main : " << x << endl;                // Gives output 20, i.e. nearest x value in its scope
    cout << "Output of global x using scope resolution operator :: " << ::x << endl; // Gives global output 10, i.e. global x value in its scope :: is scope resolution
    return 0;
}
