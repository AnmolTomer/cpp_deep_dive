/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
class Student
{
private:
    int roll;
    string name;
    int math_marks, phy_marks, chem_marks;

public:
    Student(int roll, string name, int phy_marks, int chem_marks, int math_marks);
    void set_math(int math_marks);
    void set_phy(int phy_marks);
    void set_chem(int chem_marks);

    int get_math() { return math_marks; }
    int get_phy() { return phy_marks; }
    int get_chem() { return chem_marks; }

    int total();

    char grade();
};

int main()
{
    int roll;
    string name;
    int p, c, m;
    cout << "Enter Roll Number of Student : ";
    cin >> roll;
    cout << "Enter name of the student";
    cin >> name;
    cout << "Enter marks in 3 subjects : ";
    cin >> p >> c >> m;
    Student s(roll, name, p, c, m);
    cout << "Total Marks : " << s.total() << endl;
    cout << "Grade of " << name << " is : " << s.grade() << endl;
    return 0;
}

Student::Student(int roll, string name, int phy_marks, int chem_marks, int math_marks)
{
    this->roll = roll;
    this->name = name;
    this->math_marks = math_marks;
    this->phy_marks = phy_marks;
    this->chem_marks = chem_marks;
}
int Student::total()
{
    return math_marks + phy_marks + chem_marks;
}
char Student::grade()
{
    {
        float average = total() / 3;
        if (average > 60)
            return 'A';
        else if (average >= 40 && average < 60)
            return 'B';
        else
            return 'C';
    }
}

void Student::set_math(int math_marks)
{
    if (math_marks >= 0)
        this->math_marks = math_marks;
    else
        this->math_marks = 0;
}
void Student::set_phy(int phy_marks)
{
    if (phy_marks >= 0)
        this->phy_marks = phy_marks;
    else
        this->phy_marks = 0;
}
void Student::set_chem(int chem_marks)
{
    if (chem_marks >= 0)
        this->chem_marks = chem_marks;
    else
        this->chem_marks = 0;
}
/*

Write a class student with following :
1. Roll
2. Name
3. Marks in 3 subject

Functions for total marks, Grade and required methods.

*/