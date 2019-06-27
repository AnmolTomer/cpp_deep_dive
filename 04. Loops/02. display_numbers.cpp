/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int i = 1; // Initialization for while loop
               // Using for loop
               /*
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
    */

    /*
    while (i <= 10) // Condition
    {
        cout << i << endl;
        i++; // Updation
    }
    */

    do // do-while loop
    {
        cout << i << endl;
        i++;
    } while (i <= 10);

    /*
    for(;;) // Infinite loop
    {
        cout<<i<<endl;
        if(i>10) // Setting a condition to break free from infinite for loop.
            break;
    }
*/
    return 0;
}
/*
If you have a number of loops to iterate then go for for loop, if you don't know then while or do-while loop.
*/
