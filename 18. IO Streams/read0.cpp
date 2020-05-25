#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("write0.txt"); // Modes ios::in for reading and ios::out for writing, ifstream for reading only here.
    // File must exist, new file won't be created when working with ifstream object.

    //Method 1 to Check if file is open
    /*if (!infile) 
    {
        cout << "File not present.\n";
    }*/

    // Method 2 to check if file is open
    if (!infile.is_open())
    {
        cout << "File not present.\n";
    }
    else
    {
        string str;
        int x;
        infile >> str;
        infile >> x;
        cout << str << " " << x << endl;
        // To check end of the file
    }
    if (infile.eof())
    {
        infile.close();
        cout << "End of file reached! Closing file now." << endl;
    }
}