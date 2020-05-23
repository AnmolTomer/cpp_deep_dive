#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;
    cout << "*ptr = " << *ptr << endl;
    cout << ++*ptr << endl;
}