#include <iostream>
using namespace std;
typedef int marks;
enum dept
{
    CSE = 1,
    ECM,
    ECE,
    CIVIL,
    MECH,
    EEE
};
enum day
{
    mon,
    tue,
    wed,
    thu,
    fri,
    sat,
    sun
}; // Enum used to define our own data type
int main(int argc, char const *argv[])
{
    day d;
    // d = 1; // Gives error
    d = mon; // This is correct to assign.
    cout << "Value of monday is : " << d << endl;
    cout << "Directly displaying tue or thu instead of using enum" << endl;
    cout << tue << " " << thu << endl; // Gives value as the index of tue and thu.
    // mon++; // This is wrong as expression of enum type can't be modified.

    /*
It is like an identifier mon, tue...sat or sun.
So, to variable d of type enum we can only assign values that we have mentioned above.
All these are constants under the name of day and we can create a var of type day and use
those constants for variables which starts from 0.
 */
    enum day_2
    {
        Mon = 1,
        Tue,
        Wed,
        Thu,
        Fri,
        Sat,
        Sun
    };
    day_2 var; // Variable of type day_2
    cout << endl;
    cout << "Number assigned to days if Mon = 1 is done is as follows : " << endl;
    cout << "Mon = " << Mon << endl;
    cout << "Tue = " << Tue << endl;
    cout << "Wed = " << Wed << endl;
    cout << "Thu = " << Thu << endl;
    cout << "Fri = " << Fri << endl;
    cout << "Sat = " << Sat << endl;
    cout << "Sun = " << Sun << endl;
    enum day_3
    {
        Mon_1 = 1,
        Tue_1,
        Wed_1,
        Thu_1 = 10,
        Fri_1,
        Sat_1,
        Sun_1
    };
    cout << endl;
    cout << "Number assigned to days if Mon = 1 and Thu = 10 is as follows : " << endl;
    cout << "Mon_1 = " << Mon_1 << endl;
    cout << "Tue_1 = " << Tue_1 << endl;
    cout << "Wed_1 = " << Wed_1 << endl;
    cout << "Thu_1 = " << Thu_1 << endl;
    cout << "Fri_1 = " << Fri_1 << endl;
    cout << "Sat_1 = " << Sat_1 << endl;
    cout << "Sun_1 = " << Sun_1 << endl;

    marks m1, m2;
    m1 = 20;
    m2 = 35;
    cout << "Values assigned to m1 and m2 via typedef are : " << endl;
    cout << "m1 = " << m1 << endl;
    cout << "m2 = " << m2 << endl;
    return 0;
}
/*
Enum is used to define a group of related constants under one name.
Other ways to declare constants include :
#define mon 0
const int mon = 0;

*/
/*-----------------------TYPEDEF-----------------------------------------
typedef used to define our own data type or giving alias to some other data type, so it is
easier for us to keep track, prevent errors and make code more readable.
Above example gives alias to data type int used as marks.
Because we might not know what's the use of 2 int variables declared out of nowhere so it is better to have 
2 int variables which are declared as marks m1,m2 to give us an idea these something to do with marks.


*/