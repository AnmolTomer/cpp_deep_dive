## C11

- **Auto Declaration**: C++ 11 allows auto type of declaration, usually we allow variables of integer, float or any other generic data type. Say we do not know which data type we need, in that case auto is the best choice to go with. It helps the programmer to not worry about the data type that is being returned and focus on the logic instead of type casting of variables.

```cpp
#include  <iostream>
using namespace std
float fun()
{
    return 2.34f;
}
int main()
{
    auto x= 2*5.7+'a';
    cout<<x;
    return 0;
}
```

- **Decltype**: If you need a variable,say z, to have same data type as some other variable, say y for that we can do `decltype(y) z = 15*10.5`

- **Final keyword:** Ref:**final.cpp**

- **Smart Pointers**: Pointers are used to access the resources, say heap memory and to access this we use pointers. Problem with heap memory is that when it is not needed we must de-allocate it, mostly this deallocation is something that programmers are too lazy to do most of the time and that causes some severe problems like memory leak, which can cause the programs to crash. JAVA,.NET or C# provide a garbage collection mechanism to deallocate the objects which are not in use.

- Similar to garbage collectors C++ provides smart pointers, these are able to automatically manage memory and de-allocate the objects when these are not in use.

- There are 3 kinds of smart pointers available:
  1. **unique_ptr**: If one object is created and pointer P1 is pointing to that object, **we cannot use same pointer to point to that same object**.
  2. **shared_ptr**: If one object is created and pointer P1 is pointing to that object, **here we can use another pointer to point to that same object**. It maintains a reference counter which keeps a track of how many pointers are existing to some object.
  3. **weak_ptr**: Same as shared pointer, only difference being **no reference counter** is maintained. Pointers won't have strong hold on objects, as in the cases where pointers have been holding the objects and are requesting for other objects in that case a deadlock may be formed between pointers. To avoid deadlock weak pointers are used.

- **Problem with normal pointers**: Memory leak a situation say you have a function called fun() it internally creates a dynamic object of class rectangle with the help of a pointer p by `Rectangle *p = new Rectangle();` now when the function ends p is deleted but in the heap memory where p created the object of class Rectangle in heap memory that object still exists it is just that no variable is pointing to it. So there will be a point in the program where heap memory will be full and program crashes due to undeleted objects which were dynamically created at some point in heap memory. 

- A good practice to avoid this is do `delete p;`. So, to help the programmers C++ came up with smart pointers, which will automatically de-allocate the object when it goes out of scope. To make a smart pointer we can do following:

```cpp
fun()
{
    unique_ptr<Rectangle> p1(new Rectangle(10,5));
    cout << p1->area();
    cout << p1->perimeter();
}
```

- **InClass Initializer and Delegation of Constuctors:**

- Delegation of constructor basically means one constructor is able to call another constructor of a class.
```cpp
class Test
{
    int x = 10;
    int y = 13; // Direct assignment of members allowed only from C11
    public:
        Test(int x,int y)
        {
            this->x = x;
            this->y = y;
        }
        Test():Test(1,1) // Non-parameterized constructor calling the parameterized constructor.
};
```

- **Ellipsis**: Used to take variable number of arguments in the function.

```cpp
int sum(int n,...) // 3 dots ... represents variable number of args we can call by doing sum(4,1,2,3,4) for 4 params and sum(2,5,9) for 2 parameters.
{
    // For accessing values received through ... use va_list class in foll. manner
    va_list list;
    va_start(list,n); // Takes all the arguments in form of list from variable_arguments list and wil take n elements mentioned.
    int s= 0;
    for(int i = 0;i<n;i++)
    {
        s += va_arg(list,int);
    }
    va_end(list)
    return s;
}
```