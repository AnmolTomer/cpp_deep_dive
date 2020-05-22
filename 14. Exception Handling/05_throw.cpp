#include <iostream>
using namespace std;
// --------------------------------------------VERSION 5 : Class MyException: Inherit from exception-----------------------------------------

class MyException : exception
{
};

int division(int a, int b) throw(MyException)
{
    if (b == 0)
        throw MyException();
    return a / b;
}

int main()
{
    int x = 10, y = 0, z;
    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (MyException e)
    {
        cout << "Division by zero" << '\n';
    }
}
// --------------------------------------------VERSION 4 : Class MyException: Inherit from exception-----------------------------------------

// --------------------------------------------VERSION 4 : Class MyException-----------------------------------------
// class MyException
// {
// };
// int main()
// {
//     int x = 10, y = 0, z;
//     try
//     {
//         if (y == 0)
//             throw MyException();
//         z = x / y;
//         cout << z << endl;
//     }
//     catch (MyException e)
//     {
//         cout << "Division by zero." << '\n';
//     }

//     cout << "Out of Try - Throw - Catch.\n";
// }
// --------------------------------------------VERSION 4 : Class MyException-----------------------------------------

// -------------------------------------------- VERSION 3: Throw STRING-----------------------------------------
// {
//     int x = 10, y = 0, z;
//     try
//     {
//         if (y == 0)
//             throw string("Division by zero.");
//         z = x / y;
//         cout << z << endl;
//     }
//     catch (string e)
//     {
//         cout << e << '\n';
//     }

//     cout << "Out of Try - Throw - Catch.\n";
// }
// -------------------------------------------- VERSION 3: Throw STRING-----------------------------------------

// -------------------------------------------- VERSION 2: Throw DOUBLE-----------------------------------------
// {
//     int x = 10, y = 0, z;
//     try
//     {
//         if (y == 0)
//             throw 1.5;
//         z = x / y;
//         cout << z << endl;
//     }
//     catch (double e)
//     {
//         cout << "Division by zero ERR Code: " << e << '\n';
//     }

//     cout << "Out of Try - Throw - Catch.\n";
// }
// -------------------------------------------- VERSION 2: Throw DOUBLE-----------------------------------------

// -------------------------------------------- VERSION 1: Throw INT-----------------------------------------
// {
//     int x = 10, y = 0, z;
//     try
//     {
//         if (y == 0)
//             throw 1;
//         z = x / y;
//         cout << z << endl;
//     }
//     catch (int e)
//     {
//         cout << "Division by zero ERR Code: " << e << '\n';
//     }

//     cout << "Out of Try - Throw - Catch.\n";
// }
// -------------------------------------------- VERSION 1: Throw INT-----------------------------------------