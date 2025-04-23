# C++ Linked List Cheat Sheet (`std::list`)

## Introduction

`std::list` in C++ is a container that implements a doubly linked list. It allows efficient insertion and deletion of elements from anywhere in the container.

## Basic Operations

### Creation

```cpp
std::list<int> myList;
```

### Adding Elements

```cpp
myList.push_back(10);  // Adds 10 to the end
myList.push_front(5);  // Adds 5 to the front
```

### Accessing Elements

```cpp
int front = myList.front();  // Access the first element
int back = myList.back();    // Access the last element
```

### Removing Elements

```cpp
myList.pop_back();    // Removes the last element
myList.pop_front();   // Removes the first element
```

### Checking Size & If Empty

```cpp
size_t size = myList.size();      // Returns the number of elements
bool isEmpty = myList.empty();    // Returns true if the list is empty
```

## Advanced Operations

### Insert/Remove Elements

```cpp
list<int>::iterator it = myList.begin();
it++;  // Move iterator to the second position
it = myList.insert(it, 15);  // Insert 15 before the element pointed to by iterator
it = myList.erase(it);  // Removes second element - return the it to next element
```

### Remove Duplicates

```cpp
myList.unique();  // Removes consecutive duplicates
```

### Swap Two Lists

```cpp
std::list<int> anotherList;
myList.swap(anotherList);  // Swaps the contents of myList and anotherList
```

### Reverse the List

```cpp
myList.reverse();  // Reverses the order of the elements
```

### Merge Two Lists

```cpp
std::list<int> list1, list2;
list1.merge(list2);  // Merges list2 into list1; list2 becomes empty
```

## Iterating Over the List

### Using Iterators

```cpp
for(list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
    std::cout << *it << " ";
}
```

## Key Points

- `std::list` supports bidirectional iterators.
- Useful for scenarios with frequent insertions and deletions.
- Does not support random access to elements.
