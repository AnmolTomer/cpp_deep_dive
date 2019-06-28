/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    while (n != 0)
    {
        int r;
        r = n % 10;
        cout << r;
        n /= 10;
    }
    return 0;
}
