#include <iostream>
/*
There area totally 4 kinds of pre/post increment and decrement operators.
1. Pre Increment (++x) Unary operator, much faster than x = x+1 a binary operator.
2. Post Increment (x++)
3. Pre Decrement (--x)
4. Post Decrement (x--)
*/
using namespace std;
int main(int argc, char const *argv[])
{
    int x = 5, storage;
    storage = ++x; // Value of x incremented first and then as 6 it is stored in storage var.

    cout << "PRE/POST INCREMENT" << endl;
    // ------------------------------------PRE/POST-INCREMENT BEGINS---------------------------------------------------
    cout << endl;
    cout << "Example of PRE INCREMENT when x = 5 : " << endl;
    cout << endl;
    cout << "Value of x incremented first and then as 6 it is stored in storage var." << endl;
    cout << "So, X = " << x << " and Storage = " << storage << endl;
    cout << endl;
    cout << "Doing a post increment and storing it to storage var again and results are as follows : " << endl;
    storage = x++; // Value which was in previous stage i.e. 6 is stored in storage var and then incremented to 7.
    cout << "Value which was in previous stage i.e. 6 is stored in storage var and then incremented to 7." << endl;
    cout << "So we get 6 as value of storage when printed and value of x as 7 as it was inceremented after storing to storage." << endl;
    cout << "Storage = " << storage << " X = " << x << endl;
    // ------------------------------------PRE/POST-INCREMENT ENDS-----------------------------------------------------
    x = 5;
    cout << endl;

    cout << "PRE/POST DECREMENT" << endl;
    cout << endl;
    cout << "RESET X to 5" << endl;
    cout << endl;
    storage = --x; // Value of x decremented first and then as 4 it is stored in storage var.

    cout << "Value of x decremented first and then as 6 it is stored in storage var. So, X = " << x << " and Storage = " << storage << endl;

    storage = x--; // Value which was in previous stage i.e. 4 is stored in storage var and then decremented to 3.
    cout << "Value which was in previous stage i.e. 4 is stored in storage var and then decremented to 3." << endl;
    cout << "So we get 4 as value of storage when printed and value of x as 3 as it was inceremented after storing to storage." << endl;
    cout << "Storage = " << storage << endl;
    cout << "X = " << x << endl;
    return 0;
}
