## Data Structures

- To store the collection of values we need data structures. Arrangement of data for efficient utilization is what the study of Data Structures is all about. Efficiency is measured on 2 parameters time and space. CPP provides arrays, but problem is that it is of fixed size which can't be modified as per the need.

- Another Data Structure is Linked List, Size of LL can grow and reduce as per the numbers being inserted or deleted. Easy to create new nodes in a LL. There are doubly as well as circular linked lists too.

- Some of the other Data Structures are: Stack, Queue, Dequeue, Priority Queue, Map, Set, Graphs etc. So, as a programmer do we have to define all these data structures before using them in our program ? No, we don't have to do that. C++ provides built-in library of classes for all these data structures and that is collection of classes called as STL.

- There are some collection of header files having many classes in them and that collection is called as STL. There is class available for LL, arrays, stack etc.

##  Standard Template Library (STL)

- STL has **algorithms**, **containers** and **iterators**. There are built-in algorithms of functions that are meant to manage the containers. Containers contain collection of data. There are iterators to iterate through the collection of values. To access the containers we have iterators available. Algorithms contain, search(), sort(), binary-search(),concat(),copy(),union(), reverse(),merge(),heap() are some of the functions that are available to be called on containers

- Containers: These are template classes, can work for any kind of data.
    1. **vector**: Array that can grow and reduce as per the input. Has functions like **push_back()**, **pop_back()**,**insert()**,**remove()**,**size()** and **empty()**.

    2. **list**: **Doubly linked list**. Has functions same as vector but additional ones like **push_front()**,**pop_front()**,front(), back() etc.

    3. **forward_list**: **Single linked list**, introduced in C11. As double linked list needs space for pointer to next and previous node.

    4. **dequeue**: Dequeue is like vector only but it means double ended queue and we can delete and insert from both the ends. List, forward_list and dequeue has same set of functions. Only in vector we can't insert from front.

    5. **priority_queue**: **Heap** data structure. **Max-heap** to be specific. push(), pop(),empty(),size() same operations as stack present for priority queue as well. Priority queue basically means the largest element from the queue will be deleted.

    6. **stack**: Follows LIFO has same set of operations as priority queue we see above.

    7. **set**: Collection of elements that contains unique elements and does not maintains the order.

    8. **Multiset**: Same as set but allows duplicates.
    
    9. **Map**: To store **key-value** pairs. Like Dictionary in Python. Contains unique keys, can't have 2 keys with same content. Uses hash tables. Similarly we have **multimap** as you might have guessed this allows keys to be duplicated just like multiset. Duplicate keys are allowed but same key-value pair is still not allowed.

## Iterators

- Ref:**stl.cpp**