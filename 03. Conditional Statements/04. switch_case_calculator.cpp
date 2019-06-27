/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    cout << "MENU" << endl;
    cout << "1. Add \n"
         << "2. Subtract \n"
         << "3. Multiply \n"
         << "4. Divide \n";
    int option;
    cin >> option;
    int a, b, c;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    switch (option)
    {
    case 1:
        /* code */
        c = a + b;
        cout << "Sum = " << c << endl;
        break;
    case 2:
        c = a - b;
        cout << "Difference = " << c << endl;
        break;
    case 3:
        c = a * b;
        cout << "Product = " << c << endl;
        break;
    case 4:
        c = a / b;
        cout << "Quotient = " << c << endl;
        break;

    default:
        cout << "Invalid Choice";
        break;
    }
    return 0;
}
