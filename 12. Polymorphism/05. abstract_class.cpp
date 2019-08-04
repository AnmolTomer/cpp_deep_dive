/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
class Base
{
public:
    void fun1()
    {
        cout << "Base fun1";
    }
    virtual void fun2() = 0;
    /*void fun2() // Normal function fun2 we make it as pure virtual function above
    {
        cout << "Base fun2";
    } 
    */
};

class Derived : public Base
{
    // Derived class re-uses the function of base class -> Borrowing the features of base class -> Reusability
    void fun2()
    {
        cout << "Derived Fun2"; // This is function overriding : Re-defining the function of base class in a child class
    }
    // So question is when child class redefines the function then what's the need to define function in base class ?
    // When we want to redefine function that means we want polymorphism -> Purpose of inheritance is polymorphism
    /*  So when child class has the function, then purpose of base class having body of function isn't needed, 
and in some cases we do need definition in base class also But when for namesake we want function in base and
purpose is to use function inside derived class then to achieve polymorphism we set function of base as virtual,
which means functions having virtual in front of them are there just for namesake and real functions are there
down in derived class with definition that would be considered for final output.

So, when using virtual in base functions do we need the body of function ? No we don't. We want definition only
in derived classes, base class would have no functionality and just prototype of function, then we remove the body as 
follows : virtual void fun2() = 0 ; in the base class This would mean pure virtual function.
The purpose of function above is to achieve polymorphism. We want derived classes to override this function intentionally.
It thus becomes mandatory for derived classes to override the function when it is a pure virtual function.
This means base class is governing or giving a rule to child classes to definitely override the function.

If a class has pure virtual function then that class is known as abstract class. Object of that class cannot be created.
However, pointer to the abstract class can be made Base *p ;. Abstract classes can't have objects but they can have
pointers to achieve polymorphism. Polymorphism can be achieved as we have seen earlier by doing
Base *p = new Derived();
p->fun2(); // Calls the function of derived class.
*/
};
int main()
{
    Base *p = new Derived();
    p->fun2(); // Prints derived fun2 to show that pure virtual function fun2 ignored of Base class and Derived is printed.
    return 0;
}
/*
Conclusion : 1. Purpose of inheritance is reusability. Above derived class gets fun1 from base class.
2. Polymorphism : We make a pure virtual function fun2 and derived class overrides that function fun2.

So, there are 3 types of classes in C++ :
1. A class having all concrete function no pure virtual function is implemented for reusability for child classes.
2. A class with all pure virtual function meant only for overriding i.e. polymorphism and such a base class is interface.
3. Class with some concrete functions and some virtual functions then purpose is reusability and polymorphism.

#2 and #3 known as abstract class too.
*/