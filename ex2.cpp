#pragma once
#include "ex1.cpp"
#include <numeric>

/*
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

Extend the program to include the use of STL iterators and algorithms. Perform the following tasks:

1. Use iterators to traverse each container and modify the elements.
2. Apply at least three different STL algorithms (e.g., `std::sort`, `std::find`, `std::accumulate`) on suitable containers.
*/

int Ex2(){
    std::list<int> ll;
    std::map<int, char> m;
    std::set<int> s;
    std::unordered_map<int, char> um;
    std::unordered_set<int> us;
    std::vector<int> vec;

    // insert some elements
    for(int i = 0; i < 10; ++i){
        ll.push_back(i);
        m[i] = static_cast<char>(i+100);
        s.insert(i);
        um[i] = static_cast<char>(i+100);
        us.insert(i);
        vec.push_back(i);
    }

    // iterate over the elements and print them
    
    // print list
    PrintContainer(ll);

    // print map
    PrintMap(m);

    // print set
    PrintContainer(s);

    // print unordered_map
    PrintMap(um);

    // print unordered_set
    PrintContainer(s);

    // print vector
    PrintContainer(vec);

    // perform a specific operation unique to the container (e.g., sorting a vector, finding an element in a set)
    // sort vector
    sort(vec.begin(), vec.end());

    // splices all of ll onto the back of ll2 (does not make a copy)
    int ll_sum = std::accumulate(ll.begin(), ll.end(), 0);
    std::cout << ll_sum << std::endl;

    // find a value in a map
    std::cout << (m.find(3) != m.end() ? m[3] : static_cast<char>(-1)) << std::endl;

    // find a value in an unorderd_map
    std::cout << (m.find(3) != m.end() ? m[3] : static_cast<char>(-1)) << std::endl;

    // checking if a value is in a set in O(1) time
    std::cout << (s.find(15) != s.end() ? 15 : static_cast<char>(-1))  << std::endl;

    // checking if a value is in a set in O(1) time
    std::cout << (us.find(7) != us.end() ? 7 : static_cast<char>(-1))  << std::endl;

}