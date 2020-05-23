#include <iostream>
using namespace std;
namespace First //encapsulating within namespaces
{
    void func()
    {
        cout << "First";
    }
} // namespace First

namespace Second
{
    void func()
    {
        cout << "Second";
    }
} // namespace Second
int main()
{
    First::func();
    cout << "\n";
    return 0;
}