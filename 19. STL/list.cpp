#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> v = {10, 20, 40, 90}; // Change list to forward list to have single linked list, set to use set, no push_back for set we use insert for set.
    v.push_back(25);
    v.push_back(35);
    v.pop_back();

    /*
    for (int x : v) // for each int x in vector int v we iterate
    {
        cout << x << endl;
    }
    */

    list<int>::iterator itr;

    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << endl;
    }
}