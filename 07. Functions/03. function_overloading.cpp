/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int add(int x, int y)
{
    return x + y;
}
/* Same name can be used as parameters being passed to this or signature of 2 functions are different though name is same
Here though name is same but the numer of parameters taken by this add function below is 3 and this makes it different
from a function which has same name add but takes in only 2 integers.
C++ compiler can differentiate between 2 functions of same names based on parameters type and # of parameters being passed.
This is called function overloading. Benefit here is that if # or type of parameters is different then 
we don't need to think of new names as the function is same only parameters type or # is different.

*/
int add(int x, int y, int z)
{
    return x + y + z;
}
float add(float x, float y)
{
    return x + y;
}
// So we can say that 2 functions with same name and same # of parameters can be different too if data type is different.
int main()
{
    int a = 10, b = 5, c, d;
    c = add(a, b); // We want to have a function which gives sum of 2 integers and store it in c.
    cout << "Output of add(a,b) with 2 parameters is : " << c;
    // Now we want to have another function which takes in 3 integers and sum is returned which is stored in d.
    d = add(a, b, c);
    cout << "Output of add(a,b,c) with 3 parameters is : " << d;
    // In C language we cannot have more than one function with same name but here we can have so.
    float i = 2.5, j = 7.5, k;
    k = add(i, j);
    cout << "Output of add(a,b) with 2 float parameters is : " << k;
    return 0;
}

/* 
FUNCTION OVERLOADING : Writing more than one function with the same name but different parameters.

There would be name conflict in the case when return type is different but name of function along with parameters type
and # of parameters are different. Much like example below :
Example of name conflict :
int max(int,int)
float max(int,int)
*/