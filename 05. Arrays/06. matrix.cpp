/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int A[2][3] = {3, 3, 3, 3, 3, 3};
    int B[2][3] = {1, 1, 1, 1, 1, 1};
    int C[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << endl;
    cout << "Sum of 2 matrices comes out to be : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    cout << endl;
    cout << "Difference of 2 matrices comes out to be : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    /*
    for (int i = 1; i <= 5; i++) // For rows
    {
        for (int j = 1; j <= 5; j++) // Inner for loop for displaying a line, for columns inner loop
        {
            cout << "(" << i << "," << j << ") "; // Shows how i and j changes
        }
        cout << endl; // Outer for loop is to repeat the lines printed by inner loop
    }
    */
    return 0;
}
