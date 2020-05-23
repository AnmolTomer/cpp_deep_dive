// constant in functions
#include <iostream>

using namespace std;

// void fun(int &a, int &b) // Passing parameters by reference. Allows us to modify value of a.
void fun(const int &a, int &b) // Passing parameters by reference.
{
    cout << "x = " << a << "\ny = " << b << endl;
    // a++; // Since reference of a is passed as const int we cannot modify value of a only read it.
}

int main()
{
    int x = 10;
    int y = 20;
    fun(x, y); // Call by reference is used when we want function to modify the values of variables that are being passed to it.
    cout << "After function call \n";
    cout << "x = " << x << "\ny = " << y << endl;
}