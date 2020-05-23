#include <iostream>

using namespace std;

int main()
{
    const int x = 10;
    cout << x << endl;
    const int *ptrX = &x;
    cout << *ptrX << endl;

    // Pointer to int
    int y = 5;
    int *ptrY = &y;
    ++*ptrY;
    cout << *ptrY << endl;

    // const ptr to int
    int z = 5;
    const int *ptrZ = &z;
    // ++*ptrZ; // --> Not allowed. Gives error.
    cout << *ptrZ << endl;
    // *ptrZ = &y; // Not allowed --> Gives error.
}