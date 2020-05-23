## Templates

- Templates are used for generic programming. We can write the code which can work for any type of data. If we want the following int based function to work for any data type:

```cpp
int maximum(int x, int y){
    return x > y? x:y;
}
```

- We can use template class to make the above function work for any type of data, we define template class T.

```cpp
template <class T>
{
    T maximum(T x, T y)
    {
        return x>y?x:y;
    }
}
```

- Taking example of a multiple parameters to template classes.

```cpp
template <class T, class R>
void add(T x, R y)
{
    cout << x+y ; // Allows us to do addition where we pass int and float to the function.
}
```

- **Template Classes:** We take a look at example class Stack. We take an array for implementation of stack, we have a top pointer to point to a particular index. This stack works only for integer and is not able to handle float or any other data type. Instead of writing separate classes for different data types, we can write single class for all data types that will work for float,char and all other data types. To do so we can make the **class as template**.

```cpp
class stack
{
    private:
        int s[10];
        int top;
    public:
        void push(int x)
        int pop();
};
```

- **Class as Template:** We define a class of type template we use the following method:

```cpp
template <class T>
class stack
{
    private:
        T s[10];
        int top;
    
    public:
        void push(T x);
        T pop();
};
// Outside the class we again have to write T we used for template above.

template <class T>
void stack<T>::push(T x)
{
    // Code for push
}

template <class T>

void stack<T>:pop()
{
    // Code for pop 
}

// To create object of stack class we do

stack <int> D; // Int stack
stack <float> F; // Float stack
```