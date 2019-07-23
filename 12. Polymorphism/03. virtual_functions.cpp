/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;

class BasicCar
{
public:
    virtual void start() { cout << "BasicCar Started." << endl; }
};

class AdvancedCar : public BasicCar
{
public:
    void start() { cout << "AdvancedCar Started." << endl; }
};

int main()
{
    BasicCar *ptr = new AdvancedCar();
    ptr->start(); // Calling without virtual in front of Basic Car start function prints BasicCar started.
    // Calling with virtual in front of Basic Car start function prints AdvancedCar Started.
    BasicCar *ptr2 = new BasicCar();
    ptr2->start(); // To print BasicCar syntax
    return 0;
}
