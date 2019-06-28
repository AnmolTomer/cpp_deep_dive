/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter 2 numbers : ";
    cin >> m >> n;

    while (m != n)
    {
        if (m > n)
            m -= n;
        else
        {
            n -= m;
        }
    }
    cout << "GCD : " << m << endl;
    return 0;
}
