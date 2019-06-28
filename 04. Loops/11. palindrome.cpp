/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0;
    cout << "Enter a number : ";
    cin >> n;
    int n1 = n;
    while (n1 != 0)
    {
        int r;
        r = n1 % 10;
        rev = rev * 10 + r;
        n1 /= 10;
    }
    if (n == rev)
        cout << "Number " << n << " is a palindrome.";
    else
    {
        cout << "Number " << n << " is not a palindrome.";
    }

    return 0;
}
