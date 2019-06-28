/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    //    --------------------------------------------------------------------------------------
    /*
    // To find sum of elements in an array
    int sum = 0;
    for (auto x : array)
        sum += x;
    cout << "Sum is " << sum;
    */
    //    ---------------------------------------------------------------------------------------
    //    ---------------------------------------------------------------------------------------
    //  To find the minimum or maximum element in an array :
    /*
    int max = -32678;
    for (auto temp : array)
    {
        if (temp > max) // use if (temp < min) then min = temp with min = INT64_MAX initiall for minimum number in array
        {
            max = temp;
        }
    }
    cout << "Max element is : " << max;    
    */
    //    ---------------------------------------------------------------------------------------
    //    ---------------------------------------------------------------------------------------
    //    To search for an element in an array :
    /*
    There are 2 methods of searching :
    1. Linear Search    2. Binary Search (Requires sorted array)

    1. Linear Search : Use a for loop for or for each loop to compare whether the current element is the one we are
    searching for. If not then we move to the next element, if it is the element then we say found at index #.
    
    
     */
    //    ---------------------------------------------------------------------------------------
    /*
    int user_input;
    cout << "Enter the number you want to search for in the array : ";
    cin >> user_input;
    int counter = 0;
    for (auto x : array)
    {

        if (x == user_input)
        {
            cout << "Number " << user_input << " is found at the location : " << counter;

            exit(0);
        }
        counter++;
    }
    cout << "Not found!";
        
    */

    return 0;
}
