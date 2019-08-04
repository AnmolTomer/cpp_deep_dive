/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
class Test
{
private:
    int a;

public:
    friend void fun(); // Though function doesn't belongs to this class but is a friend function
                       // and can access and manipulate values even from outside upon object but not directly.
    int b;

protected:
    int c;
};

// We make a global function which tries to access and set values of all data members of Test.
// Global function can do so only when we have defined fun as friend inside the class
// Used for operator overloading mostly.
void fun()
{
    Test t;
    t.a = 15;
    t.b = 10;
    t.c = 5;
}
int main()
{

    return 0;
}

/*
Say we have a class Test as above and we have private, protected and public data members of it.

*/
/*
/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{

    return 0;
}
