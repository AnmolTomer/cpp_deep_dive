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
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            cout << i << " is a factorial of " << n << "." << endl;
    }
    return 0;
}
