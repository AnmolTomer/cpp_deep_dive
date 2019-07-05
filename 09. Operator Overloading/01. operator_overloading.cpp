/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex(int real = 0, int img = 0) // 0 if nothing is passed
    {
        this->real = real;
        this->img = img;
    }
    // Complex add(Complex x) // Normal way
    Complex operator+(Complex x)
    { // Signature of add function
        Complex temp;
        temp.real = this->real + x.real;
        temp.img = this->img + x.img;
        return temp;
    }
    int get_real()
    {
        return this->real;
    }
    int get_img()
    {
        return this->img;
    }
};

int main()
{
    Complex c1(5, 7), c2(2, 9), c3;
    // c3 = c1.add(c2); // Old method
    c3 = c1 + c2; // Using operator overloading
    cout << "Sum of c1(5,7) and c2(5,9) complex numbers is : " << c3.get_real() << " + " << c3.get_img() << "i as sum.";
    return 0;
}

/*In C++ there are operators for various operations like +,-,*,/,new,delete etc.
These operators are meant for some specific data type. There are built-in operators for built-in data types.
Say + can be used by-default only with int or float data type only. If we are defining our own data type say a class
called matrix and we want + operator to add 2 matrices A and B and store it in C ? 
Yes, with the help of operator overloading we can do so. + operator can be overloaded for matrix.
For user defined data type we can overload operators. There are various operators we can overload in C++ except a few.

We here try to add 2 complex numbers c1 and c2 and show sum as c3 by overloading + operator.
c3 = c1+c2 where c1 = 5+7i and c2 = 2+9i and c3 comes comes out to be 7+16i.

For operator overloading two things are needed : 
1. How to write functions
2. Signature of a function

Say we are inside main
int main(){
    Complex c1(5,7); // makes complex number object c1
    Complex c2(2,9);
    Complex c3;
    // What we want is c3 = c1+c2 . c1 to c3 all are objects of class complex. Now how the addition would happen ?
    // Instead of + we do the following
    c3 = c1.add(c2) // c1 will add 2 complex numbers and will take c2 as parameter. Now we define add function in class
}
This was the logic now we move towards operator overloading part.
Now where we have defined the function as Complex add(Complex x) there instead of add we write operator+ as follows :
Complex operator+(Complex x) and this can be called not as c3 = c1.operator+(c2) but as c3 = c1 + c2
*/