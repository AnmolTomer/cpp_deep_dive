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
    // Friend function's prototype
    friend Complex operator+(Complex x, Complex y); // Friend function has to be written outside the class.
    // Should return Complex only and takes 2 complex #'s as parameters, add them and return result in another Complex object
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

Complex operator+(Complex c1, Complex c2) // Independent function doesn't belongs to class but if friend of the class.
//That is the reason why scope resolution is not used here.
{
    Complex t;
    t.real = c1.real + c2.real;
    t.img = c1.img + c2.img;
    return t;
}
/*
We have seen how to overload an operator. There is another way as well for overloading an operator using friend function.
Here also we want to do c3 = c1 + c2. In operator overloading either c1 was calling c2 as argument or vice-versa.

Suppose 2 person have some money and they want to know total amount they both have. Either A can take B's money and find total
or B can take A's money and find total. This is what kind of happens in operator overloading.

Or what we can do is call a third person and tell him to take Money of A and B and tell the total. This is what happens
when we use friend function. Above we can see how to make this friend function.

*/