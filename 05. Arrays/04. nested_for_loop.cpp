/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++) // For rows
    {
        for (int j = 1; j <= 5; j++) // Inner for loop for displaying a line, for columns inner loop
        {
            cout << "(" << i << "," << j << ") "; // Shows how i and j changes
        }
        cout << endl; // Outer for loop is to repeat the lines printed by inner loop
    }

    return 0;
}
