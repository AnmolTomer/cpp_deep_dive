/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    typedef float salary;
    salary basic, per_allow, per_deduct, net;
    cout << "Enter Basic Salary : ";
    cin >> basic;
    cout << "Enter Percentage of Allowances : ";
    cin >> per_allow;
    cout << "Enter Percentage of Deductions : ";
    cin >> per_deduct;
    net = basic + basic * per_allow / 100 - basic * per_deduct / 100;
    cout << "Net Salary is : " << net << endl;
    return 0;
}
