/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 2, z;
    try
    {
        if (y == 0)
            throw 1;
        z = x / y;
        cout << z << endl;
    }
    catch (int e)
    {
        cout << "Division by zero...!!" << e << endl;
    }
    cout << "Outside try catch";
    return 0;
}
