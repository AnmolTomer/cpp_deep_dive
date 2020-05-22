/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int division(int x, int y)
{
    // Inside the function check for error condition throw something for catch block and return the result if error condition is not satisfied.
    if (y == 0)
        throw 1;
    return x / y;
}
int main()
{
    int a = 10, b = 0, c;
    try
    {
        c = division(a, b); // Pass division to the function.
        cout << c;
    }
    catch (int e)
    {
        cout << "Division by zero. Error code : " << e << endl;
    }
    cout << "\nOutside try catch.\n";
    return 0;
}

/*
Actual purpose of try, catch throw we see above.
When we call a function that function returns a result, and in case of function not being able to return the result
then function should be able to inform the calling function that there is some problem. We want functions to be able to communicate with each other.
So when function is called it should either return the result or it should tell about error.
So we can say that throw catch try is used for comms between functions. If we want 2 functions main and division whenever
main calls division to communicate whether result is returned or if exception is there we use try catch thingy.

That's why try catch is useful in functions with help of throw, otherwise we could just use 
*/