/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int n, result = 1;
    cout << "Enter the number whose factorial you want to print : ";
    cin >> n;
    if (n < 0)
    {
        cout << "Factorial of negative numbers does not exist.\n";
    }
    else if (n == 0 || n == 1)
    {
        cout << "Factorial is 1.\n";
    }
    else
    {
        for (int i = n; i >= 1; i--)
        {
            /* code */
            result *= i;
        }
        cout << "Factorial is : " << result << "." << endl;
    }

    return 0;
}