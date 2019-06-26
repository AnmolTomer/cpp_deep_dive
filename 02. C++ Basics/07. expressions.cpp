#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, const char **argv)
{

    /*
    AREA OF A CIRCLE
    float r, area;
    cout << "Enter Radius : ";
    cin >> r;
    area = 3.1425f * r * r;
    // area = 22 / 7 * r * r; // Gives us int result as 22/7 forces entire thing to be int but inaccurate as it gives quotient of 22/7
    // area = 22 / 7.0 * r * r; // Leads to result being int but accurately rounded off to int.
    area = (float)22 / 7 * r * r; // Another way to do the same.
    cout << "Area of circle is : " << area << " units." << endl;    
     
    */
    /*
    ROOTS OF QUADRATIC EQUATION

    int a, b, c;
    float root_1, root_2;
    cout << "Enter 3 coefficients of quadratic equation i.e. a,b and c in that order : ";
    cin >> a >> b >> c;

    root_1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
    root_2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
    cout << "Root #1 of equation having coefficients a = " << a << ", b = " << b << ", c = " << c << "is : " << root_1 << endl;
    cout << "Root #2 of equation having coefficients a = " << a << ", b = " << b << ", c = " << c << "is : " << root_2 << endl;
   
    */
    int u, v, a;
    float speed;

    cout << "Enter initial velocity (u) : ";
    cin >> u;

    cout << "Enter final velocity (v) : ";
    cin >> v;

    cout << "Enter acceleration (a) : ";
    cin >> a;

    speed = (v * v - u * u) / (2 * a);
    cout << "Speed is " << speed << endl;

    return 0;
}