/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;

class Rational
{
private:
    int p, q;

public:
    // Non parameterized constructor made useless by setting p and q = 1 in the constructor below
    /*Rational()
    {
        p = 1;
        q = 1;
    } */
    Rational(int p = 1, int q = 1) // Parameterized constructor
    {
        this->p = p;
        this->q = q;
    }
    Rational(Rational &r) // Copy constructor
    {
        this->p = r.p;
        this->q = r.q;
    }
    int get_p() { return p; }
    int get_q() { return q; }
    void set_p(int p)
    {
        this->p = p;
    }
    void set_q(int q)
    {
        this->q = q;
    }
    Rational operator+(Rational r)
    {
        Rational temp;
        temp.p = this->p * r.q + this->q * r.p; // Numerator part
        temp.q = this->q * r.q;                 // Denominator part
        return temp;                            // Return numerator and denominator together
    }
    friend ostream &operator<<(ostream &os, Rational &r);
};

int main()
{
    Rational r1(3, 4), r2(2, 5), r3;
    r3 = r1 + r2;
    cout << "Sum of " << r1 << " and " << r2 << " is " << r3 << endl;
    return 0;
}

ostream &operator<<(ostream &os, Rational &r)
{
    os << r.p << "/" << r.q;
    return os;
}
/*
Here we write a class Rational and use operator overloading on + and insertion operator to display the sum.
*/