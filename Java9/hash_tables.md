# `unordered_map` in C++ – Cheat Sheet

## What Is a Hash Table?

A **hash table** is a data structure that offers **average O(1)** time complexity for insertion, lookup, and deletion by using a **hash function** to map keys to indices (buckets) in an internal array.

---

## Collision Handling Techniques

### Open Addressing

All elements are stored directly in the array. If a collision occurs (two keys hash to the same bucket), probing is used to find the next available slot.

### Separate Chaining

Each bucket contains a container (usually a linked list or vector) that stores all entries with the same hash.  
`unordered_map` uses this method.

---

## `unordered_map` Overview

`unordered_map` is an associative container that stores key–value pairs with **unique keys**, implemented as a **hash table**.

### Key Characteristics:

- **Unordered**: No guaranteed order of elements
- **Average O(1)** time for insertions, deletions, and lookups
- **Keys must be hashable and equality-comparable**
- **Automatically resizes** when load factor grows

### Header File:

```cpp
#include <unordered_map>
```

### Basic Operations

#### 1. Creating an unordered_map

```cpp
// Create an empty map
unordered_map<string, int> ages;

// Initialize with list of key-value pairs
unordered_map<string, int> scores = {
    {"Alice", 95},
    {"Bob", 89},
    {"Charlie", 92}
};
```

#### 2. Inserting Elements

```cpp
// Using operator[]
ages["Alice"] = 30;
ages["Bob"] = 25;

ages.insert({"Charlie", 35});
```

#### 3. Accessing Elements

```cpp
// Using operator[] (creates element with default value if not found)
int aliceAge = ages["Alice"];
// Note: If "Alice" doesn't exist, it will be created with a default-constructed value (0 for int)

// Using at() (throws out_of_range exception if not found)
try {
    int davidAge = ages.at("David");
} catch (const out_of_range& e) {
    cout << "Key not found!" << endl;
}
```

#### 4. Removing Elements

```cpp
// Erase by key
ages.erase("Alice");

// Clear all elements
ages.clear();
```

#### 5. Iterating through Elements

```cpp
for (auto it = ages.begin(); it != ages.end(); ++it) {
    cout << it->first << " is " << it->second << " years old." << endl;
}
```
