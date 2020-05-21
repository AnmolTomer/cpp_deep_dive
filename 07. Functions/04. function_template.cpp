/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
/*
// Doing things overloaded way.
int max(int x, int y)
{
    return x > y ? x : y; // If x > y ? return x : else return y
}
float max(float x, float y)
{
    return x > y ? x : y;
}
*/
// -----------------------------------------------------------------------------------------------
// Function template way of doing things.
template <class T>
// T Max(T x, T y)
T max(T x, T y)
{
    return x > y ? x : y;
}
int main()
{

    // cout << max<float>(12.6, 56.5) << endl; / /This would give you error.
    // Check answer by Francois Andrieux on this link to use ::
    // cout << Max<float>(12.6, 56.5) << endl;// This works too to have capital function name with namespace std.
    cout << "Output for float gives us : " << ::max(12.6, 56.5) << endl;
    cout << "Output for int gives us : " << ::max(112, 93) << endl;

    return 0;
}

/*
FUNCTION TEMPLATE : The functions which are generic are function templates. Generalised in terms of data type. 
                    Above we see 2 examples to understand generic functions. 2 functions are just overloaded with
different data type that's all. Number of parameters are same as well but datatype of parameters are different.
From main if we call int c as above first function is called and float b calls the second function.

If we notice the body of the function i.e. code/logic written is exactly same only datatype is different.
So question arises... Why to write same function twice when there is only a difference in data type ?
Or go into the hassle of function overloading ? Can't we just write a single function combining these 2 functions
for any data type ? Yes we can. We do T for template in the above .

We define template <class T> Which is a definition of T defined as class of type template.
T is a template class and function is template function. Now when in the main function when via int c we call
the function max then automatically T will be replaced by int and when we call via float b then T becomes float.
Same function can be used with multiple data types as if it is a single function with difference of data types.
Function template will not only work just for datatypes but also for objects of your classes.

*/