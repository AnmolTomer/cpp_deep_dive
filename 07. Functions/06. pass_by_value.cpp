/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Output of formal parameters a and b after swap(a,b) : " << a << " " << b << endl;
}

int main()
{
    int x = 10, y = 20;
    cout << "Value of actual parameters x and y before swap(x,y) : " << x << " " << y << endl;
    swap(x, y);
    cout << "Output of actual parameters after swap(x,y) : " << x << " " << y << endl; // LOL swap doesn't happens.
    return 0;
}
/*
C++ allows passing or call by using 3 different methods 

1. Call by value or Pass by value
2. Call by address
3. Call by reference

Call by value stores the values into the as the variables values' in activation record of function in stack memory.
Inside swap functions' activation record a becomes 20 from 10 and b becomes 10 from 20. Function ends.
As we know when function ends its memory inside the block gets deleted and due to this control comes to main function.
Now we see indeed x and y didn't get swapped and 10, 20 is printed.
So we learnt that in call by value values of variables being passed is copied in as values of variables in function.
Formal parameters are the parameters of the function we define and what we supply are actual parameters inside main.
So any changes done to formal parameters value does not change value of their actual parameters counterpart. Thus, formal
parameters cannot modify the value of actual parameters.
Call by value is ideally used if you want a function just to take values from n parameters and give an individual result R
after some calculation. To return individual result you use call by value, by supplying values of actual parameters and
getting result in return.
REMEMBER : Changes are done in activation record of formal parameters and do not affect activation record of actual
parameters.
*/