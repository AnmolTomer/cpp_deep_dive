/*

author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    float num[100], sum = 0.0, average;
    cout << "Enter the number of elements : ";
    cin >> n;
    float d;
    for (i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter Number : ";
        cin >> num[i];
        sum += num[i];
    }
    average = sum / n;
    cout << "Average is : " << average;
    return 0;
}