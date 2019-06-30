/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
void display()
{
    cout << "Hello";
}
int max(int x, int y)
{
    return x > y ? x : y; // Function to return max -> Checks if x>y ? if true then return x : else return y.
}
int min(int x, int y)
{
    return x > y ? y : x; // Function to return min -> Checks if x>y ? if true then return y : else return x.
}
int main()
{
    /*
    void (*fp)(); // Method of declaring a pointer to the function. Ptr to a function must be inside brackets()
    fp = display; // Assigning a name of a function to function pointer fp. The address of function will be stored here.
    (*fp)();      // Function call to the function display.
    */
    int (*fp)(int, int); // Declare a function pointer to max or min as prototype same for both functions.
    fp = max;            // Assign fp to max function.
    (*fp)(29, 21);       // Expected return 29 as called on max.
    max(29, 21);
    fp = min;
    (*fp)(29, 21); // Expected return 21 as called on min now.
    return 0;
}
/*
We know that we can have pointer to any primitive data type, we can also have pointer of type class.
We can also have pointer to a function. Above we have display function not returning anything and having no parameters.
If we want to call the function from main we can say display() and hello will be displayed.
Now, instead of directly calling the function using a name we can also use a pointer to the function.
We define a function to the pointer and we call it fp above. return_type(*function_pointer_name)(parameters)

On declaring a pointer to a function everything is same as prototype of a function, but instead of function name we have
pointer name in bracket with parameters in another bracket. 
Initialization done using function name.
Calling done by giving function pointer name inside () and pass required parameters if any.

Where we call the same pointer on max and min function we see that this is somewhat like polymorphism, different
functions are called as pointer points towards different functions. So, this is same name but different functions.

This is like polymorphism. In function over-riding internally functional pointers are used to achieve run-time polymorphism
using function over-riding. One function pointer can point to any function with same signature/prototype.
*/