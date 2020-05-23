#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    const int *ptr = &x; // Pointer of type integer constant, even if x is not const, it means we can't change x using ptr pointer.
    cout << "*ptr = " << *ptr << endl;
    // cout << ++*ptr << endl; // ERROR
}