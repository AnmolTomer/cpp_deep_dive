/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the number upto which you want to know the sum : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum is " << sum << endl;
    return 0;
}
