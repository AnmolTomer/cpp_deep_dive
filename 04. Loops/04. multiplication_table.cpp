/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number whose multiplication table you want to print : " << endl;
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        /* code */
        cout << n << " X " << i << " = " << n * i << endl;
    }

    return 0;
}