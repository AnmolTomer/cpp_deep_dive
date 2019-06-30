/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &y = x;                           // y is a reference to x
    cout << "Value of x : " << x << endl; //Display value of X
    y++;                                  // Increments value of x
    x++;                                  // Again value of x incremented.
    cout << x << endl;                    // Same value of x incremented twice and we get answer as 12
    cout << "Address of X : " << &x << " Address of y : " << &y << endl;
    // We see that address of x and y are same. So y is not another variable but just another name with same address of x.
    // Declaration of any reference variable requires an initializer or a variable already declared whose memory it
    // will store.
    /*y = b; or &y = b; cannot be done as this is wrong because once initialized reference variable can't be assigned to another variable.*/
    return 0;
}
