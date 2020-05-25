#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;

    friend ofstream &operator<<(ofstream &ofs, Student &s); // Use friend function to override insertion or extraction operator.
    friend ifstream &operator>>(ifstream &ifs, Student &s);
};

ofstream &operator<<(ofstream &ofs, Student &s)
{
    ofs << s.name << endl;
    ofs << s.roll << endl;
    ofs << s.branch << endl;
    return ofs;
}

ifstream &operator>>(ifstream &ifs, Student &s)
{
    ifs >> s.name >> s.roll >> s.branch;

    return ifs;
}

int main()
{
    Student s1;
    s1.name = "Tomer";
    s1.roll = 10;
    s1.branch = "ECM";
    ofstream ofs("serialization.txt");

    // We can store in the following manner
    /*
    ofs << s1.name << endl;
    ofs << s1.roll << endl;
    ofs << s1.branch << endl;
    */

    // We can instead store the object so that all members can be stored. For this we overload the operator of ofstream in student class.
    ofs << s1;

    ifstream ifs("serialization.txt");
    ifs >> s1;                          // Overloading of ifs input file stream.
    cout << "Name " << s1.name << endl; // Open file and read data directly by overloading of operators.
    cout << "Roll No " << s1.roll << endl;
    cout << "Branch " << s1.branch << endl;
    ifs.close();
    ofs.close();
}