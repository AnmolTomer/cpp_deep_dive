#include <iostream>

using namespace std;

int main()
{
    const int x = 10;
    const int *ptr = &x; // Pointer of type integer constant.
    cout << "*ptr = " << *ptr << endl;
    // cout << ++*ptr << endl; // ERROR
}