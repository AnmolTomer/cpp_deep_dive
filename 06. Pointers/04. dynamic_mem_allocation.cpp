/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    /*
    int *ptr = new int[5]; //Create a pointer and assign a new array of size 5 in heap.
    ptr[0] = 12;           //Storing the elements
    ptr[1] = 19;
    cout << ptr[1] << endl; // Accessing the elements

    // First we delete de-allocate the memory and then do nullptr to stop ptr pointing to that memory location
    delete[] ptr;
    ptr = nullptr; // nullptr a built-in literal made only for pointer for newer version of C++.
    */

    // Benefit of having array in heap instead of stack section

    /*
   When we declare array of a fixed size in the program say 10 then there is no procedure
   in C++ for array to change its size in the middle of execution. What if user wants to enter
   more than 10 elements. 
   So, we want to create an array depending upon the number of elements user will store into the array. 
   We take size from the user, and we can create array[size]; this is an approach to this.
   This is possible as C++ allows dynamic declaration of array.
   After making the array once if we take another size from user and do array[size] once again
   it won't work as once the array is created in program it cannot be modified.
   
   To create a dynamic array inside the heap we take the number of elements and use pointer.
    */
    /*
    // Creating array in heap the hard way
    int size;
    cout << "Enter the size of the array you want to create : ";
    cin >> size;
    int *p = new int[size]; // Take a pointer and create an array of size given by user.
    p[0] = 23;
    cout << "Element at 0 index in first array is : " << p[0] << endl;
    cout << "Enter new size : ";
    cin >> size; // Take size again
    p = new int[size];
    p[2] = 49;
    cout << "Element at 2nd index in new array is : " << p[2] << endl;
    
    */

    /**/
    // Creating array in heap the easy way
    int *p = new int[20]; // Array created with size 20. p[i] can be 0 to 19 here
    // Later on in the program if we want array of larger size say 40 we can create that too.
    // Size 40 array will be created in heap and same ptr p will be pointing towards that array.
    // Before creating the array of larger size we de-allocate the memory which p currently holds of int[20]
    delete[] p;      // and now we can create an array of larger size, to avoid memory leak.
    p = new int[40]; // p[i] can be 0 to 39 here. So, with same pointer we created a larger size array.
    // Here we created array of smaller size and then using the same pointer created an array of larger size.
    // More on heap memory and pointers later on.

    return 0;
}
