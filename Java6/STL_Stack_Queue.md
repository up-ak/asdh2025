# STL Stack and Queue Cheat Sheet

## Stack

A stack is a container adaptor that gives you LIFO (Last-In, First-Out) access to elements.

### Including the header

```cpp
#include <stack>
```

### Declaration

```cpp
std::stack<int> stk; // Declares a stack of integers
```

### Basic Operations

- **Push (Insert)**: Adds an element to the top of the stack.

  ```cpp
  stk.push(10); // Pushes 10 on top of the stack
  ```

- **Pop (Remove)**: Removes the top element from the stack. Does not return the element.

  ```cpp
  stk.pop(); // Removes the top element
  ```

- **Top (Access)**: Accesses the top element of the stack.

  ```cpp
  int topElement = stk.top(); // Retrieves the top element
  ```

- **Empty**: Checks if the stack is empty.

  ```cpp
  bool isEmpty = stk.empty(); // Returns true if stack is empty
  ```

- **Size**: Returns the number of elements in the stack.

  ```cpp
  size_t size = stk.size(); // Gets the size of the stack
  ```

## Queue

A queue provides FIFO (First-In, First-Out) access to elements.

### Including the header

```cpp
#include <queue>
```

### Declaration

```cpp
std::queue<int> que; // Declares a queue of integers
```

### Basic Operations

- **Push (Insert)**: Adds an element to the end of the queue.

  ```cpp
  que.push(10); // Enqueues 10
  ```

- **Pop (Remove)**: Removes the front element from the queue. Does not return the element.

  ```cpp
  que.pop(); // Dequeues the front element
  ```

- **Front (Access)**: Accesses the front element of the queue.

  ```cpp
  int frontElement = que.front(); // Retrieves the front element
  ```

- **Back**: Accesses the last element added to the queue.

  ```cpp
  int backElement = que.back(); // Retrieves the back element
  ```

- **Empty**: Checks if the queue is empty.

  ```cpp
  bool isEmpty = que.empty(); // Returns true if queue is empty
  ```

- **Size**: Returns the number of elements in the queue.

  ```cpp
  size_t size = que.size(); // Gets the size of the queue
  ```

### Priority Queue

A variant of queue that retrieves elements based on a priority.

#### Declaration

```cpp
#include <queue>

std::priority_queue<int> pq; // Declares a max-heap priority queue for integers
```

#### Basic Operations

- **Push (Insert)**, **Pop (Remove)**, **Top (Access)**, **Empty**, and **Size** operations work similarly to `std::stack`.
