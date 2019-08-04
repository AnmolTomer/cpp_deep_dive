/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
class Car
{
public:
    virtual void start() = 0; // Pure Virtual Function Thus, class is abstract class.
    /* Object creation of abstract class is not allowed but we can make pointer of abstract class.
    Purpose of pure virtual function is to force the child classes to override those functions and if child doesn;t
    overrides then child classes become Abstract classes as well. Pure virtual function used for getting polymorphism.*/
};
class Innova : public Car
{
public:
    void start() { cout << "Innova started" << endl; }
};

class Swift : public Car
{
public:
    void start() { cout << "Swift started" << endl; }
};
