#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    const int *ptr = &x; // Pointer of type integer constant, even if x is not const, it means we can't change x using ptr pointer.
    cout << "*ptr when *ptr = &x  ==> " << *ptr << endl;
    int y = 20;
    ptr = &y;
    cout << "*ptr when *ptr = &y  ==> " << *ptr << endl;
    // Can modify on which variable ptr points to but can't modify var value just like before.
}