/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
void display()
{
    cout << "Hello, World!";
}

int add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}
// --------------------------------------------------------------------
int main()
{
    // display();
    int a = 10, b = 5, c;
    c = add(a, b); // Storing the value returned in c
    cout << "Sum is : " << c << endl;
    return 0;
}

/*

Functions are a piece of program code which performs a specific task.
Takes input as parameters and returns result as return value.
These are useful for procedural programming or modular programming.
Functions are re-usable and can be shared with other programmers.
Collection of functions is called library.
Every C++ function has a main function, the entry point of the program for what we want.
If we have a very big program say 10k lines of code then writing everything inside main would
be really hard to debug and doesn't seems the right way of doing things.
Here 10k lines of code may take few days and if we forget even one single exception
it may lead to run time errors or unexpected outcome which is again hard to debug.
This code is not ideal for work load distribution. When this program becomes really big
it may or may not fit into some computer memory and this monolithic way is not correct.

Instead, we can break program into manageable, reusable pieces then piece wise development of
code can be distributed among teams and then merged into single program in the end, main integrating them directly
or indirectly. Also memory usage is more efficient here. This is modular programming achieved using functions.

DECLARING A FUNCTION 

output      identifier      input
return type function_name(parameters list)
A function can return atmost 1 value and not more than 1. Can take multiple inputs but gives 1 output.
Functions not returning any values have type void.
Rules for giving function names are same as variable names.

We should avoid doing cin or cout inside the function as it is a bad function practice. Function shouldn't interact.
Idea behind this is that imagine main is the manager and function is the employee called for doing some work.
When the client gives in some input then manager should interact with it and pass it on to the employee or function.
Through main function we take input or output from user and pass in that to the function. Do not have interactivity inside
the function.

How this works inside main memory ? 
Memory has 3 sections : Code section, stack and heap.
Code section will have all the functions inside it. The above code has 3 pieces add,display and main function.
So, machine code will also be in 3 pieces just as we wrote the code above in 3 pieces.
Machine code of add or display is not copied into main that is a wrong belief. Machine code stays separate as per function.
Program we are running, program is loaded inside the code section.
On starting of main, memory is created into stack section for integers a,b and c as main runs before any other function.
Where a, b and c are created in stack is called activation record of main function along with data they have been assigned.
Next there is a call to function add, as soon as we pass stuff to add program goes to definition of add function and into
the stack section creates a sub section with variables assigned in definition of function add, here those are x,y and z.
This is activation record of add inside stack. So, x, y and z 3 blocks are created for 3 variables.
As we passed a and b. So value of a and b i.e. 10 and 5 gets copied into x and y. Next x+y is stored in z.
return z means this value is copied in c as we wrote c = add(a,b) and as soon as this is done activation record of add
function is deleted from memory from stack. Whenever a function is called the memory for all the variables used in function
is created inside the stack and when the function ends then all that memory is cleared automatically. If function allocated
some memory into the heap, then that memory won't be deallocated on its own rather function should release it.
So if function uses new then that memory has to be deleted within function after goal is achieved.
Anyway, coming back, activation record of add deleted, returned variable z stored in c. 
Printing of c is done and after that function main ends resulting in activation record of main from code stack being removed.
This is how function works.

Reference Image : https://i.imgur.com/uelLOXl.png
*/