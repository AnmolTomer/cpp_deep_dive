#include <iostream>
#include <memory> // For unique_ptr

using namespace std;

class Rectangle
{
    int len;
    int bre;

public:
    Rectangle(int len, int bre)
    {
        this->len = len;
        this->bre = bre;
    }
    int area()
    {
        return len * bre;
    }
};

int main()
{
    unique_ptr<Rectangle> ptr(new Rectangle(10, 5)); // Object created in heap and given to unique_ptr and pointer name is ptr
    cout << "Display using unique_ptr, ptr= " << ptr->area() << endl;
    // unique_ptr<Rectangle> ptr2(ptr); // Gives error as we passed unique_ptr ptr to ptr2, instead we can remove or pass on ptr to ptr2 using move in following manner
    unique_ptr<Rectangle> ptr2;
    ptr2 = move(ptr);
    cout << "Display using ptr2 = move(ptr), ptr2= " << ptr2->area() << endl;

    // Shared Pointer
    shared_ptr<Rectangle> ptr_shared_1(new Rectangle(5, 5));
    cout << "-------------------------------------" << endl;
    cout << "ptr_shared_1(new Rectangle(5, 5): " << ptr_shared_1->area() << endl;
    cout << "ptr_shared_1.use_count() = " << ptr_shared_1.use_count() << endl;
    shared_ptr<Rectangle> ptr_shared_2;
    ptr_shared_2 = ptr_shared_1;
    cout << "ptr_shared_2(new Rectangle(5, 5): " << ptr_shared_2->area() << endl;
    cout << "ptr_shared_2.use_count() = " << ptr_shared_2.use_count() << endl;
    cout << "-------------------------------------" << endl;
    // Java is a managed language that runs inside the JVM, C++ is unmanaged and runs independently, so C++ has smart classes which acts as smart pointers to achieve similar functionality as garbage collection present inside of managed languages.
}