/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int *fun(int size)
{
    int *p = new int[size];
    for (int i = 0; i < size; i++)
        p[i] = i + 1;
    return p;
}
int main()
{
    int *ptr = fun(5); // Creates an array of size 5 in heap, initializes the elements and returns the pointer.
    // ptr will point to 0th index element of array in heap memory.

    return 0;
}
/*
Return by Address kind of functions :  Functions can also return addresses. Functions can take adderesses as parameters
                                    and in that case functions are called call by address kind of functions.

Above we have a function named fun which returns size as a parameter. The function takes a pointer and creates an array
of that size. As new is used then memory is created in the heap. When new is used memory is used inside the heap.
Code creates an array in heap and p is pointer to that array.
Then we have code to assign every index location a value more than its index. 0 will be 1. 1 will be 2 and nth index will
have value n+1.
Function till now has created the array, filled it with elements and now we return the address using return p.

When we have any work with heap memory then we can use functions which return the address of that heap memory and it
will be useful for calling function memory. So above is a method for return by address for a function.
*/