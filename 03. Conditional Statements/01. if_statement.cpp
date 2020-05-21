/*
Conditional statements are to be used when we need to execute a piece of code
based upon occurence of some condition.

Construct of if condition
if(condition defined here)
{
    Code to be run if the condition defined above is true.
}
else
{
    Code to be run if the condition defined with if statement is false.
}

In C++ false is 0 and any other value is 1 or true. Conditional statements are prepared using
relational operators.
Relational Operators are :
<  Less than
<= Less than equal to
>  Greater than
>= Greather than equal to
== whether equal to
!= Not equal to

Logical Operators : To combine two or more than two conditions
Logical Operators are : 
&& - AND
|| - OR
!  - NOT

Few examples of conditional statements

if(true)
{
    cout<<"YES!";
}
else
{
    cout<<"NO";
}
*/

/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    /* 
    //To verify if roll number entered is valid or not
    int rolll_no;
    cout << "Enter roll number : ";
    cin >> rolll_no;
    if (rolll_no <= 0)
    {
        cout << "Invalid Roll Number!";
    }
    else
    {
        cout << "Valid Roll Number.";
    }

    */

    /*
//    To verify that denominator is not zero and produce result of division of two numbers.
    int a, b;
    float c;
    cout << "Enter 2 numbers : ";
    cin >> a >> b;
    if (b == 0)
    {
        cout << "Division cannot be performed with denominator b == 0.";
    }
    else
    {
        c = a / b;
        cout << "A/B = " << c;
    }
    */
    /* Compound Conditional Statements : Made using logical operators && and ||. We can use these to join together
multiple conditional statements.*/

    // Program to take age of a person and see whether he is young or not : Young if age >= 12 and <= 30
    /*
    int age;
    cout << "Enter your age : ";
    cin >> age;
    if (age >= 12 && age <= 30)
    {
        cout << "You are young :D YOLO!";
    }
    else if (age > 30 && age < 65)
    {
        cout << "You are part of active working population. Gotta keep hustling chief !";
    }
    else if (age >= 65 && age <= 130)
    {
        cout << "How's retirement coming along ? I bet you love spending time doing things you love like a child free of worries. :D You have earned it. Thanks for your service to the society.";
    }
    else
    {
        cout << "IMMORTAL SPOTTED ! Immortals ? Uhh...we don't do that here.";
    }
 */

    // Program to find the greatest of 3 integers using if-else-if ladder
    int a, b, c;
    cout << "Enter 3 numbers : ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "Largest number is : " << a;
    }
    else if (b > c)
    {
        cout << "Largest number is : " << b;
    }
    else
    {
        cout << "Largest number is : " << c;
    }
    /*  In if else-if ladder program takes the maximum time to reach the last condition and due to this in C++ we have
another alternative where we use switch case statements.*/
    return 0;
}
