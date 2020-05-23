#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int *const ptr = &x; // ptr constant of type integer pointer. Now ptr is a constant and is an integer pointer, so it can't point to any other variable. Though it can definitely
    cout << "*ptr when *ptr = &x  ==> " << *ptr << endl;
    cout << "++*ptr = " << ++*ptr << endl;
    int y = 20;
    // ptr = &y;
    // cout << "*ptr when *ptr = &y  ==> " << *ptr << endl;
    // Can modify on which variable ptr points to but can't modify var value just like before.
}