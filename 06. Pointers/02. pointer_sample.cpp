/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int a = 10;    // A data variable
    int *ptr = &a; // Address variable declared with * and initialized with address of a.

    cout << "Printing a gives : " << a << endl;
    cout << "Printing Address of a using &a gives : " << &a << endl;
    cout << "Printing ptr gives us again address of a as *ptr = &a : " << ptr << endl;
    cout << "Printing &ptr gives us address of pointer i.e. : " << &ptr << endl;
    cout << "Printing *ptr gives us data stored at the address of a i.e. : " << *ptr << endl;
    return 0;
}
