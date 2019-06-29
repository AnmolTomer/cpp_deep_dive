/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
    cout << "Enter rows and columns for first matrix : ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix : ";
    cin >> r2 >> c2;
    if (c1 != r2)
    {
        cout << "Two matrices can't be multiplied.";
        return 0;
    }
    // Storing elements for first matrix
    cout << endl
         << "Enter number of elements of matrix 1 : " << endl;
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c1; ++j)
        {
            cout << "Enter elements of matrix 1 : " << endl;
            cin >> a[i][j];
        }
    }
    // Storing elements of matrix 2
    cout << endl
         << "Enter number of elements of matrix 2 : " << endl;
    for (i = 0; i < r2; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            cout << "Enter elements of matrix 2 : " << endl;
            cin >> b[i][j];
        }
    }
    // Multiplying matrix a and b and storing in array mult.
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
        {
            mult[i][j] = 0;
            for (k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    // Displaying the multiplication of two matrix.
    cout << endl
         << "Output Matrix : " << endl;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
        {
            cout << " " << mult[i][j];
            if (j == c2 - 1)
                cout << endl;
        }
    return 0;
}
