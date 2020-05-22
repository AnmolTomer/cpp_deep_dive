// We can have catch block of multiple types and for exception we do not know which type it is of for that we do catch(...) this is called catch all.
// exceptions are checked for in the order of catch. If you declare catch all in the beginning all exceptions will go to catch all in that case.
// We can have try block inside try block i.e. nested try as well. Nesting of try and catch can be done as well.
// If we have 2 classes, parent and child class, in that case if we have a try block and inside that there is a possibility of both the exceptions, so we will catch both the exceptions, we will have a catch each for parent and child class. First we specify catch for child class and after that catch for parent class as if we define exception of parent class first it is capable of handline and catching exception of child class as well.

#include <iostream>

using namespace std;

int main()
{
    try
    {
        throw 'a';
        throw 1;   // We can have multiple catch blocks for every data type.
        throw 1.5; // Will give error of uncaught exception of type double found if you have catch with (int e)
    }

    catch (int e)
    {
        cout << "Int catch" << endl;
    }
    catch (double e)
    {
        cout << "Double catch." << endl;
    }
    catch (...)
    {
        cout << "Catch all." << endl;
    }
}