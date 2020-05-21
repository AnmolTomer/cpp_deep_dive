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
    int counter = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            counter++;
    }
    if (counter > 2)
    {
        cout << "Given number " << n << " is not a prime number.";
    }
    else
    {
        cout << "Given number " << n << " is a prime number." << endl;
    }

    return 0;
}