# STL Array and Vector Cheat Sheet

## Array

`std::array` is a fixed-size container that encapsulates C-style arrays with added benefits of STL containers.

### Including the header

```cpp
#include <array>
```

### Declaration

```cpp
array<int, 5> arr;                   // Declares an array of 5 integers
array<int, 5> arr = {1, 2, 3, 4, 5}; // Declares and initializes
```

### Basic Operations

- **Access Elements**: Multiple ways to access elements.

  ```cpp
  int element = arr[2];      // Access via subscript operator (no bounds checking)
  int element = arr.at(2);   // Access with bounds checking (throws std::out_of_range)
  int first = arr.front();   // Access first element
  int last = arr.back();     // Access last element
  ```

- **Iterators**: Standard container iterators.

  ```cpp
  auto begin = arr.begin();  // Iterator to beginning
  auto end = arr.end();      // Iterator to end

  auto second = begin + 1;

  // Reading the current element value
  int value = *second;

  for (auto it = numbers.begin(); it != numbers.end(); it++) {
      cout << *it << " ";
  }
  ```

- **Size**: Get container information.

  ```cpp
  size_t size = arr.size();     // Number of elements
  size_t maxSize = arr.max_size(); // Maximum possible number of elements
  bool isEmpty = arr.empty();   // Check if empty
  ```

- **Fill**: Set all elements to a value.

  ```cpp
  arr.fill(10);  // Sets all elements to 10
  ```

- **Swap**: Exchange content with another array.

  ```cpp
  std::array<int, 5> other = {6, 7, 8, 9, 10};
  arr.swap(other);  // Swap contents with other
  ```

## Vector

`std::vector` is a dynamic array that can resize itself automatically when elements are added or removed.

### Including the header

```cpp
#include <vector>
```

### Declaration

```cpp
std::vector<int> vec;// Declares an empty vector of integers
```

### Basic Operations

- **Access Elements**: Multiple ways to access elements.

  ```cpp
  int element = vec[2];      // Access via subscript operator (no bounds checking)
  int element = vec.at(2);   // Access with bounds checking (throws std::out_of_range)
  int first = vec.front();   // Access first element
  int last = vec.back();     // Access last element
  ```

- **Modifying Elements**: Adding and removing elements.

  ```cpp
  vec.push_back(6);          // Add element at the end
  vec.pop_back();            // Remove the last element

  vec.clear();               // Remove all elements
  ```

- **Capacity Management**: Control memory allocation.

  ```cpp
  size_t size = vec.size();     // Number of elements
  size_t cap = vec.capacity();  // Current allocated storage capacity
  bool isEmpty = vec.empty();   // Check if empty
  ```

- **Iterators**: Standard container iterators.

  ```cpp
  auto begin = vec.begin();    // Iterator to beginning
  auto end = vec.end();        // Iterator to end
  ```

- **Swap**: Exchange content with another vector.

  ```cpp
  std::vector<int> other = {6, 7, 8, 9, 10};
  vec.swap(other);           // Swap contents with other
  ```

### Key Differences Between array and vector

1. **Size**: `std::array` has fixed size determined at compile time, while `std::vector` can dynamically grow/shrink.
2. **Memory**: `std::array` is allocated on the stack (unless explicitly placed elsewhere), while `std::vector` uses heap memory.
3. **Methods**: `std::vector` has methods for changing size (push_back, pop_back, resize), which `std::array` lacks.
4. **Performance**: `std::array` has slightly better performance for fixed-size needs due to less overhead.
