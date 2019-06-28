/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    /*
    // For printing square pattern

    for (int i = 1; i <= 5; i++) 
    {
        for (int j = 1; j <= 5; j++) 
        {
            cout << "* "; 
        }
        cout << endl;
    }
    */
    /*
    for (int i = 1; i <= 5; i++) // Prints a stair format star pattern which goes from 1 to 5 star.
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* "; // Shows how i and j changes
        }
        cout << endl; // Outer for loop is to repeat the lines printed by inner loop
    }
    */

    /*
    for (int i = 1; i <= 5; i++) // Prints a stair format star pattern which goes from 5 to 1 star . top-left stair
    {
        for (int j = 1; j <= 5 - i + 1; j++)
        {
            cout << "* "; // Shows how i and j changes
        }
        cout << endl; // Outer for loop is to repeat the lines printed by inner loop
    }
    */
    for (int i = 1; i <= 5; i++) // Prints a stair format star pattern which goes from 1 to 5 star . bottom-right stair
    {
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i + j > 5) // use if (i<=j) for top-right triangle which goes from 5 to 1 star.
                    cout << "* ";
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }

        return 0;
    }
