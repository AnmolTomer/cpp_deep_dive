/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
class Basic_Car
{
public:
    void start() { cout << "Starting car." << endl; }
};

class Advanced_Car : public Basic_Car
{
public:
    void play_music() { cout << "Playing Music." << endl; }
};
int main()
{
    Advanced_Car a; // Object creation
    /*a.start();
    a.play_music(); */

    /*
    Basic_Car *ptr; // Pointer of Basic Car.
    ptr = &a;       // Point the pointer of Basic Car class to object of advanced car which inherits basic car class.
    ptr->start();   // Accessible and works without any problem.
    // ptr->play_music(); // Gives error saying Basic car class has no
     */

    return 0;
}
