## Destructors

- We have already looked at constructors here we understand destructors with the help of following class called `Test`

```cpp
class Test
{
    public:
        Test()
        {
            cout << "Test created";
        }
        ~Test()
        {
            cout << "Test destroyed";
        }
}

main()
{
    Test *p = new Test(); // Constructor is called

    delete P; // Destructor is called.
}
```

- `~Test()`  is the destructor. Destructor is called when object is destroyed. Constructor is used for initialization purpose and is used to allocate resources. So, makes sense to come to conclusion that destructor is used **for deallocating resources**. External resources such as heap memory,file, network connection. Everything class acquires in constructor, class should release that in destructor.

- **Some Rules:** 
- Can we overload a constructor ? **Yes**
- Can we have multiple destructors? **No**
- Can a constructor return anything ? **No**
- Can a destructor return anything ? **No**

## Destructors Inheritance : Virtual Destructor

```cpp
class Base
{
    public:
        Base()
        {
            cout << "Constructor of Base";
        }
        ~Base()
        {
            cout << "Destructor of Base";
        }
};
class Derived:public Base
{
    public:
        Derived()
        {
            cout << "Constructor of Derived";
        }
        ~Derived()
        {
            cout << "Destructor of Derived";
        }
};

int main()
{
    Derived d; // Will print constructor of Base followed by Constructor of Derived
}
```

- When object gets deleted first Destructor of Derived will be called and after that only Destructor of Base will be called. Constructors are called from top to bottom or descending order and destructors are called from bottom to top or smallest class towards the derived class i.e. ascending order.

## Problem with Destructors:

- Say in main class you have a pointer, p to **Base** class but using that pointer we make object of **Derived** class in foll. manner.

```cpp
main()
{
    Base *p;
    p = new Derived();
    ...
    ...
    ...
    delete P; // Deletes derived class object.
}
```

- Destructor of derived and after that destructor of base class should be called, but here we have a pointer of Base class and the object of Derived class, so destructor of only Derived class will be called. But Base class destructor should also be called.

- When we have Base class pointer and we make Derived class object to call the Base class destructor we write virtual in front of Base class destructor `~Base()`, this is the reason we have virtual destructors.

- So, in inheritance if we want base class destructors to also be executed when derived class destructors are called we make it virtual.