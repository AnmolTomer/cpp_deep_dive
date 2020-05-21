/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int search(int A[], int n, int key)

{
    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
            return i;
    }
    return 0;
}

int main()
{

    int Array[] = {23, 65, 89, 41, 69, 45, 91};
    int number = 7;
    cout << "Elements of array are : " << endl;
    int i = 0;

    while (i != 7)
    {
        cout << Array[i] << "\t";
        i++;
    }

    cout << "\nEnter the element you want to search for : ";
    int k;
    cin >> k;
    int index = search(Array, number, k);
    cout << "Element " << k << " found at index " << index << endl;
    return 0;
}