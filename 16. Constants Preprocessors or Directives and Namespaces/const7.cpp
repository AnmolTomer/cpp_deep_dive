#include <iostream>

using namespace std;

class Demo
{
public:
    int x = 10;
    int y = 20;

    void Display() // writing const after display function will give error on the step where we do x++ because we declare the function as constant.
    {
        // x++; // Due to const above we have made this function read only and prohibiting this from making any kind of modifications to the class members.
        cout << "x = " << x << "\ny = " << y << endl;
    }
};

int main()
{
    Demo d;
    d.Display();
}