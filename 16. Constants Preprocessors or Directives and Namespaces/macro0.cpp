#include <iostream>

using namespace std;

// ________________________DEFINE MACROS_______________________________________________________________

#define PI 3.1425
// #define PI 3 // Gives error that PI macro already defined.

#ifndef PI2
#define PI2 3.14
#endif
#define max(x, y) (x > y ? x : y)
#define MSG(x) #x
int main()
{
    cout << PI << endl;
    cout << PI2 << endl;
    cout << "Max of PI and and PI2 is :" << max(PI, PI2) << endl;
    cout << MSG(hello) << endl; // Auto convert to string
    return 0;
}