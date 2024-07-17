# ss-hw2
Week 2 Assignment: The Standard Library (STL)
**Overview**

In Week 2, you will delve into the C++ Standard Library (STL), focusing on containers, iterators, algorithms, and utilities. This assignment will help you understand how to use various STL components effectively to write cleaner, more efficient, and maintainable code.

**Objectives**

1. Learn to use different STL containers.
2. Understand iterators and their importance.
3. Apply STL algorithms to perform operations on data.
4. Utilize STL utilities to simplify coding tasks.

**Reading**

**Primary Texts:**

- “The C++ Standard Library: A Tutorial and Reference” by Nicolai M. Josuttis
    - Chapter 6: Containers
    - Chapter 9: Iterators
    - Chapter 10: Algorithms
    - Chapter 15: Utilities
- “Effective STL” by Scott Meyers
    - Item 1: Prefer algorithm calls to hand-written loops
    - Item 3: Prefer const_iterator to iterator
    - Item 18: Avoid using vector<bool>

**Assignment**

**Part 1: Using STL Containers**

Write a program that demonstrates the usage of the following STL containers:

- std::vector
- std::list
- std::map
- std::unordered_map
- std::set
- std::unordered_set

For each container, perform the following tasks:

1. Insert some elements.
2. Iterate over the elements and print them.
3. Perform a specific operation unique to that container (e.g., sorting a vector, finding an element in a set).

```cpp
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>

// Function to print elements of a container
template <typename Container>
void printContainer(const Container& container) {
    for (const auto& elem : container) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Vector
    std::vector<int> vec = {5, 3, 8, 1};
    std::sort(vec.begin(), vec.end()); // Sort
    std::cout << "Vector: ";
    printContainer(vec);

    // List
    std::list<int> lst = {5, 3, 8, 1};
    lst.sort(); // Sort
    std::cout << "List: ";
    printContainer(lst);

    // Map
    std::map<int, std::string> mp = {{1, "one"}, {2, "two"}, {3, "three"}};
    std::cout << "Map: ";
    for (const auto& [key, value] : mp) {
        std::cout << key << ":" << value << " ";
    }
    std::cout << std::endl;

    // Unordered Map
    std::unordered_map<int, std::string> ump = {{1, "one"}, {2, "two"}, {3, "three"}};
    std::cout << "Unordered Map: ";
    for (const auto& [key, value] : ump) {
        std::cout << key << ":" << value << " ";
    }
    std::cout << std::endl;

    // Set
    std::set<int> st = {5, 3, 8, 1};
    std::cout << "Set: ";
    printContainer(st);

    // Unordered Set
    std::unordered_set<int> ust = {5, 3, 8, 1};
    std::cout << "Unordered Set: ";
    printContainer(ust);

    return 0;
}
```

**Part 2: Iterators and Algorithms**

Extend the program to include the use of STL iterators and algorithms. Perform the following tasks:

1. Use iterators to traverse each container and modify the elements.
2. Apply at least three different STL algorithms (e.g., `std::sort`, `std::find`, `std::accumulate`) on suitable containers.

**Solution:**

```cpp
#include <numeric> // For std::accumulate

// Function to double the value of elements
template <typename Container>
void doubleElements(Container& container) {
    for (auto it = container.begin(); it != container.end(); ++it) {
        *it *= 2;
    }
}

int main() {
    // Part 2 - Continued from previous code

    // Using iterators to modify elements
    doubleElements(vec);
    doubleElements(lst);

    std::cout << "Doubled Vector: ";
    printContainer(vec);
    std::cout << "Doubled List: ";
    printContainer(lst);

    // Using algorithms
    auto it = std::find(vec.begin(), vec.end(), 16);
    if (it != vec.end()) {
        std::cout << "Found 16 in vector." << std::endl;
    } else {
        std::cout << "16 not found in vector." << std::endl;
    }

    int sum = std::accumulate(lst.begin(), lst.end(), 0);
    std::cout << "Sum of list elements: " << sum << std::endl;

    std::sort(lst.begin(), lst.end());
    std::cout << "Sorted List: ";
    printContainer(lst);

    return 0;
}
```

**Part 3: Utilities**

1. Use `std::pair` and `std::tuple` to store and manipulate related data.
2. Use `std::optional` to handle operations that may or may not return a value.
3. Use `std::variant` to hold one of several possible types.

**Solution:**

```cpp
#include <tuple>
#include <optional>
#include <variant>

int main() {
    // Part 3 - Continued from previous code

    // std::pair
    std::pair<int, std::string> myPair(1, "one");
    std::cout << "Pair: " << myPair.first << ", " << myPair.second << std::endl;

    // std::tuple
    std::tuple<int, std::string, double> myTuple(1, "one", 1.1);
    std::cout << "Tuple: " << std::get<0>(myTuple) << ", " << std::get<1>(myTuple) << ", " << std::get<2>(myTuple) << std::endl;

    // std::optional
    std::optional<int> opt = 5;
    if (opt) {
        std::cout << "Optional has value: " << opt.value() << std::endl;
    } else {
        std::cout << "Optional has no value." << std::endl;
    }

    // std::variant
    std::variant<int, std::string> var = "Hello";
    std::cout << "Variant: " << std::get<std::string>(var) << std::endl;

    var = 10;
    std::cout << "Variant: " << std::get<int>(var) << std::endl;

    return 0;
}
```

**Deliverables**

1. **Source Code:** Submit the complete source code of your program.
2. **Documentation:** Include comments in the code to explain your approach. Additionally, write a brief document (1-2 pages) explaining:
    - How each STL container was used.
    - The purpose and outcome of using iterators and algorithms.
    - The utilities used and their benefits.

**Submission**

Submit your source code and documentation via the course’s assignment submission portal by the end of Week 2.

**Evaluation Criteria**

- **Correctness:** The program should compile and run without errors.
- **Use of STL:** Effective and appropriate use of STL containers, iterators, algorithms, and utilities.
- **Documentation:** Clarity and completeness of the comments and the accompanying document.
- **Code Quality:** Code should be clean, well-organized, and follow modern C++ best practices.