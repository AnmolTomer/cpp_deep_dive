#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 40, 90}; // By default creates vector of size 16 mention size by doing v(size)
    v.push_back(25);                  // Adds 25 to the vector object v
    v.push_back(35);
    v.pop_back(); //Remove value at the end.

    // Iterate over list of items

    // Method 1 use for each loop introduced in C11.

    /*
    for (int x : v) // for each int x in vector int v we iterate
    {
        cout << x << endl;
    }
    */

    // Method 2 : Iterator class available and use those. We create an object of iterator and iterate through all the list of elements.
    vector<int>::iterator itr;
    // vector<int>::iterator itr = v.begin(); //Object of class iterator called itr and to it we assign the object and we pass the object and function begin on it.
    // Begin is a function available in all the containers, begin just gives the starting address of the container and end gives end of the collection.
    // e.g.
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << endl; // * is used as iterator is like a pointer to the elements inside the collection.
    }
}