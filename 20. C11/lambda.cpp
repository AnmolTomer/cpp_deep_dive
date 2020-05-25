#include <iostream>
using namespace std;
// Lambda functions are used to define functions with no name.
int main()
{
    // [capture_list](parameter_list)->return type(body);
    // Define and call the function
    string f = []() { return "Hello\n"; }();

    [](int x, int y) { cout << "Sum: " << x + y << endl; }(10, 5);

    int c = [](int x, int y) { return x + y; }(10, 5);
    cout << c << endl;

    int s = [](int x, int y) -> int { return x + y; }(10, 5);

    // Pass in already declared variables to the function

    int a = 10, b = 15;
    [a, b]() { cout << a << " " << b << endl; }(); // Allows us only to display not modify the variables

    // To modify capture the variables by reference
    [&a, &b]() { cout << ++a << " " << ++b << endl; }();
}