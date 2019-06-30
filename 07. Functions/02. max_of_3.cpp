/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int max(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

int main()
{
    cout << "Enter 3 integers to compare : ";
    int x, y, z, result;
    cin >> x >> y >> z;
    result = max(x, y, z);
    cout << "Maximum of 3 integers is : " << result;
    return 0;
}
