#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 40, 90}; // By default creates vector of size 16 mention size by doing v(size)
    v.push_back(25);
    v.push_back(35);
    v.pop_back();

    // Method 1 use for each loop introduced in C11.

    /*
    for (int x : v) // for each int x in vector int v we iterate
    {
        cout << x << endl;
    }
    */

    // Method 2 : Iterator class available and use those. We create an object of iterator and iterate through all the list of elements.
    vector<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << endl; // * is used as iterator is like a pointer to the elements inside the collection.
    }
}