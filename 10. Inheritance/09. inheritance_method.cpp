/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
class Parent
{
private:
    int a;

protected:
    int b;

public:
    int c;
    void parent_function()
    {
        a = 10;
        b = 5;
        c = 15;
    }
};

// class Child : public Parent // inheriting to Child class from Parent publicly.
// class Child : protected Parent // Inheriting as protected and all members of Parent comes under protected
class Child : private Parent // Inheriting as private and all members of Parent comes under private
{
protected:
    // Anything inside protected is accessible inside the same class but further Grand_Child class will be able to access
    // all protected and public members when inheriting from Child class. Same goes for inheriting Parent privately.
public:
    void child_function()
    {
        // a = 10; // Inaccessible due to a being private in class Parent
        b = 5;
        c = 15;
    }
};

class Grand_Child : public Child
{
public:
    void grand_child_function()
    {
        // a = 10; // Inaccessible due to a being private in class Parent
        b = 16;
        c = 20;
    }
};

int main()
{
    Child c;
    // c.b = 12; // Commented out as not accessible due to being private
    // c.a = 10; // Commented out as not accessible due to being protected
    // c.c = 14; // Commented out as not accessible after inheriting parent as protected.
    return 0;
}

/*
Derived class can inherit from base class using 3 methods private, public and protected.
Above we have parent class which has some members as one of every access specifier kind.
It has a function as well which accesses all the members.

Then we have a child class which inherits from Parent publicly. Child class has a function
which tries to access members which are being inherited from parent class.
We see that a is not accessible inside the child function so we comment it.

For explanation about various methods of inheritance of a class public, pvt. and protected we
take another class called grand_child, this class inherits from child class, here also we write
the same function as child class which tries to access variables of class Parent, and even child class does not own
these members which are being called in grand_child class from child class. As a,b,c are members of Parent class.

Let's look at method of inheritance which is publicly. When child class inherits publicly then all the members of
the parent class are taken as it is from parent to child class. Same happens when grand_child class inehrits
child class then also var a is not accessible as it is private in Parent class.

We verify the same by creating an object  of child class and accessing variables of Class Child. Upon trying to modify
the a and b variable we get an error that we cannot access a and b which are private and protected which comes from Parent.

Object of child is not accessible from main function as the members were made protected when inheriting from Parent.
*/