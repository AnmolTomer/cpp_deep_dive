/*
author : Anmol Tomer
email : anmol3540@gmail.com

*/
#include <iostream>
using namespace std;
class Outer
{
public:
    int a = 10;
    static int b;

    void func()
    {
        // Blank function
        i.show();
        cout << i.x; // Accessible all the public members in inner class from function of outer class
    }

    class Inner
    {
    public:
        int x = 25;
        void show()
        {
            cout << "Show of inner works..!";
            // cout<<a; // Not allowed to access non static members
            // cout<<b; // Works without any problem as access of static members from inner class allowed
        }
    };
    Inner i;
};

int main()
{
    Outer::Inner a;
    cout << a.x;
    return 0;
}

/*
Inner class basically is writing one class inside another class.So that subset class is useful only inside parent class.
Ideal for conditions where we want a class inside a class and subset class is not useful anywhere else.
We use it to reduce the complexity of bigger class we can write the code inside it in smaller classes.

In the above code we see that Outer class has 3 members int and static int and a blank function.

Then we move on to write a class inside outer class called Inner. So next we create an object.
Object creation always done after the definition of the class only.
Now we see we have int and static int of outer class and inner class object i as another member.

Inner class can access the members of outer class iff they are static. 

Now we begin to ponder...can the outer class create the object of inner class ? Yes it can.
And using that object it can access all the members of the class. The outer class can access all the members of the class
just like it is a class outisde. But we write it inside Outer class to make it available inside Outer class only.

Now we access the members of inner class from the created object i of Inner class and put it in void func() as above.

Nested class is a limited scope class which is visible only inside the outer class.
*/