/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int A[5]{2, 4, 6, 8, 10}; //Declare an array of size 5 and to it assign some values.
    cout << "Array A :\t";
    for (auto x : A)
        cout << x << "\t";
    cout << endl;

    int *p = A; // Take a pointers and make it point to array above.
    int *q = &A[4];
    cout << "Places p and q are far from each other are : " << q - p << endl;
    // q - p gives us positive result which basically means that q is far away and we subtracted pointer closer or which comes first from it.
    // If we do p-q then we would get -4 which would mean that second pointer is far away and we subtracted closer pointer minus pointer far away.

    /*
    cout << "Pointer p on printing p gives : " << p << endl;
    cout << "Address of A is : " << &A << endl;

    cout << "Output of *p would be first location of the array i.e. :" << *p << endl;

    p++;
    cout << "Address in pointer p after incrementing using p++ is : " << p << endl;
    cout << "Output after incrementing pointer by using p++ is next element in Array i.e. : " << *p << endl;

    p--; // Using pointer arithmetic so we do not have to use dereference operator.
    cout << "Address in pointer p after decrementing using p-- is : " << p << endl;
    cout << "Output after decrementing pointer by using p-- is previous element in Array i.e. : " << *p << endl;

    cout << "Some more pointer arithmetic, increment by 2 and so on ...";
    cout << "Output at p is : " << *p << endl;
    cout << "Output on incrementing by 2 p += 2 is element after 2 locations :" << *(p + 2) << endl;
    */

    // Displaying all the elements of the array
    cout
        << "Address of p before the loop starts " << p << endl;
    for (int i = 0; i < 5; i++)
    {
        // cout << A[i] << endl; // Displays all the elements in the array.
        // cout << i[A] << endl;
        // cout << *(A + i) << endl; // * gives the data
        // cout << (A + i) << endl; //  without * we get the addresses in memory using array name.
        // cout << (p + i) << endl; //  without * we get the addresses in memory using pointer to array name.
        // cout << *(p + i) << endl; // * gives the data but we use dereference and using pointer name directly.
        // Instead of using array name in place of array name  we can use pointer name indexing too.
        // cout << p[i] << endl; // As A and p both have the same memory address and they fetch memory_address[index]
        /*cout << *p << endl; // Using loop and increment the pointer position
        p++; */

        // Another pointer arithmetic operation, here we take p pointing on A and another pointer q which points on A[4]
        // Here we find the difference between 2 pointers using q-p
    }
    cout << "Address of p after the loop ends " << p << endl;
    cout << "This shows that pointer changes its position during the loop.";

    return 0;
}
