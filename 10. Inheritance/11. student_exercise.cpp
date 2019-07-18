/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;

class Employee // Employee class with Employee ID and name
{
private:
    int eid;
    string name;

public:
    Employee(int eid, string name) // Constructor
    {
        this->eid = eid;
        this->name = name;
    }

    int get_employee_id() { return eid; } // Accessor
    string get_name() { return name; }
};

class Full_Time_Employee : public Employee // Full_Time_Employee inheriting from Employee and has salary as data member.
{
private:
    int salary;

public:
    Full_Time_Employee(int eid, string name, int salary) : Employee(eid, name) // Call parameterized constructor of Employee
    {
        this->salary = salary;
    }
    int get_salary() { return salary; }
};

class Part_Time_Employee : public Employee
{
private:
    int daily_wage;

public:
    Part_Time_Employee(int eid, string name, int daily_wage) : Employee(eid, name)
    {
        this->daily_wage = daily_wage;
    }
    int get_wage() { return daily_wage; }
};

int main()
{
    Part_Time_Employee p1(0001, "Cosmic", 300);
    Full_Time_Employee p2(0002, "Commander", 50000);
    cout << "Salary of " << p2.get_name() << " is " << p2.get_salary() << endl;
    cout << "Daily Wage of " << p1.get_name() << " is " << p1.get_wage() << endl;

    return 0;
}
