/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    // Program to take number of day of the week and print the day in alphabets
    int day;
    cout << "Enter the day number : ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Day is Monday." << endl;
        break;

    case 2:
        cout << "Day is Tuesday." << endl;
        break;

    case 3:
        cout << "Day is Wednesday." << endl;
        break;

    case 4:
        cout << "Day is Thursday." << endl;
        break;

    case 5:
        cout << "Day is Friday." << endl;
        break;

    case 6:
        cout << "Day is Saturday." << endl;
        break;

    case 7:
        cout << "Day is Sunday." << endl;
        break;

    default:
        cout << "Enter valid day number." << endl;
        break;
    }
    return 0;
}

/*
Switch case is a branch and control statement. Construct of switch case looks like following :

switch (expression) // NOTE : Expression can be int or char type variable.
{
case 1:
        code for case 1
        break;
case 2:
        code for case 2
        break;
default:
        code for default case (OPTIONAL), if break written anywhere other than last then use break.
}

SWITCH cases are used for menu-driven programs where user has choices to select from, for every case we write a code.
We can have nested switch cases as well.
*/