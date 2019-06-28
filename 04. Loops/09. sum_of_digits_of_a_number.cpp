/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a number : ";
    cin >> n;
    while (n != 0)
    {
        int r;
        r = n % 10;
        sum += r;
        n /= 10;
    }
    cout << "Sum of digits of the number " << n << " is : " << sum << endl;
    return 0;
}
