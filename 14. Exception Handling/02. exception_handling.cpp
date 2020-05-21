/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 0, z;
    try
    {
        if (y == 0)
            throw 0;
        z = x / y;
        cout << z << endl;
    }
    catch (int e)
    {
        cout << "Division by zero...!! Error Code: " << e << endl;
    }
    cout << "Outside try catch";
    return 0;
}
/*
Construct:

try
{
    // conditions
}

catch(data_type var_name)
{

}

Explanation: Inside try block if there is any error it will jump to the catch block and execute the statements specified there.
If there are no errors in try block, catch block won't be executed at all. If no error run the entire try block, else go to catch block.

C++ compiler does not have any built-in mechanism for throwing the exception, rather we have to check for some conditions which may lead to error and based on that we have to throw exceptions. Java writes the code for throwing exception but C++ doesn't do that.

It doesn't matter what is it that you are throwing just throw something and same datatype should be put in catch block, and display your message inside the catch block.
Throw catch is just so that we can have a link between the point error occurs and connecting it to the code that tells what to show as error. You can do error code as well.

Or giving error codes can be helpful say in documentation you can give user a manual where you tell the user that this error code is thrown for this particular run time error.
*/