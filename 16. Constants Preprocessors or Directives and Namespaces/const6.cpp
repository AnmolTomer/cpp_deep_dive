#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    const int *const ptr = &x; // ptr is a constant pointer to an integer constant.
    cout << "*ptr when *ptr = &x  ==> " << *ptr << endl;
}