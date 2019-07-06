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
    /* void display() // To display a complex number, now we want cout << c1; to have result same as c1.display()
    {//So, we have to overload the insertion operator, for that we build the function prototype
        cout << this->real << " + " << this->img << "i";
    } */
    friend ostream &operator<<(ostream &o, Complex &c1); // Friend function has to be outside the class
};

int main()
{
    Complex c1(5, 7), c2(2, 9), c3;
    // c3 = c1.add(c2); // Old method
    c3 = c1 + c2; // Using operator overloading
    cout << c1;
    cout << c2;
    cout << "Sum of c1(5,7) and c2(5,9) complex numbers is : " << c3.get_real() << " + " << c3.get_img() << "i as sum.";
    return 0;
}

ostream &operator<<(ostream &o, Complex &c1)
{
    o << "Complex number is : ";
    o << c1.real << " + " << c1.img << "i" << endl;
    return o;
}
/*
We can overload output stream or ostream operator as well. We use cout and cin i.e. instream and outstream for things
like displaying the values or taking the input from the user. These extraction and insertion operators can also be over-
-loaded. We will see overloading of insertion operator class here.
We have a class Complex and in main there is object. If we have int x = 10. And we did cout<<x ; then value of x will
be displayed on screen just like that what we want here by overloading is when we do cout << c1 then display complex #.
This would allow us to display our own objects. Say c1 is 5,7 then desired result is  5 + 7i on screen after doing cout.

So just like operator overloading here we write the function first for displaying what we want and after that we would
convert it into insertion operator overloaded form.
*/