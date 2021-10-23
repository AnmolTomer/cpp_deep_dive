/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
/*
edited by : Pruthviraj Jadhav
email : k9730130467@gmail.com
*/
#include <iostream>
using namespace std;
int main()
{
    int year ;
    cout << "Enter the year you want to check for leap year : ";
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << "Year " << year << " is leap year.";
            else
                cout << "Year " << year << " is not a leap year.";
        }
        else
            cout << "Year " << year << " is a leap year.";
    }
    else
        cout << "Year " << year << " is not a leap year.";

    return 0;
}
