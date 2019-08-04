/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/

#include <iostream>
using namespace std;
class Your; // So we do class Your; before its declaration so compiler understands it on Line #14
class My
{
private:
    int a = 10;
    friend Your; // When we write friend here compiler might say there is no class named Your GoTo: Line 9
};

class Your
{
public:
    My m;
    void fun()
    {
        cout << "Value of private member of class m is : " << m.a;
        // Error until we give access upon object of class My using friend by making Your as friend class of object
    }
};

/*
Friend classes : Above there is a class called My and has only one data member which is private and is a.
Another class called your exists which takes an object of class My and public, (has a relationship)
Upon object m created in Your class publicly no data member can be accessed, that's why we make the class your as friend.

To allow one class to access private members of another class upon object then we make class Your as friend of class My.

This concept is useful in container classes. Your has an object of class m so Your class is container of objects of My class.
So, in container classes if we want to access private or protected members then what we do is we declare them as friend
inside those classes.
*/
int main()
{
    Your y;
    y.fun();
    return 0;
}