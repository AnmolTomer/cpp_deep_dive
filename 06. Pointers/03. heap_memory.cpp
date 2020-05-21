/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int A[5] = {1, 2, 3, 4, 5}; // Created inside the stack when array is declared like this.
    cout << "Elements of array A stored in stack section are : ";
    for (auto x : A)
        cout << x << "\t";
    cout << endl;

    cout << "The data stored in 2nd index at stack location is : " << A[2] << endl;
    // We can access the array in the stack section using index. Check below for accessing array in heap section.

    // Below is the code to create the array in heap.
    int *p;         // Pointer p is created inside the stack.
    p = new int[5]; // new means memory is allocated from heap, we get array in heap.
    p[2] = 420;     // Assigns 15 to second index memory location in heap section.
    cout << endl;
    cout << "The data stored in 2nd index at heap location is : " << p[2] << endl;
    // p = NULL; // If beforehand we assign p = NULL before deleting then we will lose track of the address which was
    // assigned to array created by p and it will be there in memory even if we do not want the array as long as the
    // program is running.
    delete[] p;
    p = NULL;
    // After delete we can do p = NULL meaning pointer p is not pointing anywhere and this is correct way to do it.

    /* Whenever we take a pointer and say new then the array is created in heap.
The address of this array is stored inside the p.
All the variables get memory in stack and only the ones which uses the word new and are accessed via pointers
are stored in the heap. 
*/
    /*Code for writing the same thing above of array in a heap in a single program using syntax below : 
    int *p = new int[5];
*/

    return 0;
}

/*
Heap memory access using pointers. Heap memory is accessed dynamically, means the memory is
allocated dynamically. Size of memory required in the heap is decided during the runtime and
not at compile time. Here we see the difference when the memory is allocated during stack
and when it is allocated to heap.

The variables stored in stack get deleted automatically when code goes out of scope but the memory won't be delted
just like that in heap i.e. it will be there as long as the program is running, so if we do not want heap memory
in any case to last throughout the program and we need heap memory for a limited time then what we can do is 
deallocate the heap memory which can be done using delete []p; where [] is a symbol of array associated with p.

MEMORY LEAK : Say apart from main function we allocated a memory and function has stopped, taken some memory in heap
we have set pointer to the array in heap as NULL before deallocating this memory then memory belongs to the program
but program is not pointing to it as the only way to access it has been assigned NULL that is the address of that
array in heap has been forgotten so we can't deallocate it neither can we use/access it in our program, it just sits
there taking up space.
See for more reference : https://i.imgur.com/rPvjdrs.png


*/