#include <iostream>
#include <stdarg.h>

using namespace std;

int sum(int n, ...)
{
    va_list list;      // Make list type of object to store stuff from ... variable args
    va_start(list, n); // Mention how many arguments you need.

    int x;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        x = va_arg(list, int); // To get the arguments of defined type.
        s += x;
    }
    return s;
}

int main()
{
    cout << sum(3, 10, 20, 30) << endl;
}