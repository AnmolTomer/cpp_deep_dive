#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m.insert(pair<int, string>(1, "Cosmic"));
    m.insert(pair<int, string>(2, "Darlene"));
    m.insert(pair<int, string>(3, "Tyler"));

    map<int, string>::iterator iter;
    for (iter = m.begin(); iter != m.end(); iter++)
    {
        cout << iter->first << " " << iter->second << endl;
    }

    //  We may use the function find to search by key, it returns iterator position for that value
    map<int, string>::iterator iter2;
    cout << "Search Results\n";
    iter2 = m.find(2);
    cout << iter2->first << " " << iter2->second << endl;
}