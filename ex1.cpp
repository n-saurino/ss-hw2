#pragma once
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <typeinfo>

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
*/

template <typename Container>
void PrintContainer(const Container& container){
    for(typename Container::const_iterator it = container.begin(); it != container.end(); ++it){
        std::cout << *it << ", ";
    }
    std::cout << std::endl;
}

template <typename Container>
void PrintMap(const Container& container){
    for(typename Container::const_iterator it = container.begin(); it != container.end(); ++it){
        std::cout << "{" << it->first << ", " << it->second << "}, ";
    }
    std::cout << std::endl;
}

int Ex1(){
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
    std::list<int> ll2;
    ll2.splice(ll2.end(), ll);

    // find a value in a map
    std::cout << (m.find(3) != m.end() ? m[3] : static_cast<char>(-1)) << std::endl;

    // find a value in an unorderd_map
    std::cout << (m.find(3) != m.end() ? m[3] : static_cast<char>(-1)) << std::endl;

    // checking if a value is in a set in O(1) time
    std::cout << (s.find(15) != s.end() ? 15 : static_cast<char>(-1))  << std::endl;

    // checking if a value is in a set in O(1) time
    std::cout << (us.find(7) != us.end() ? 7 : static_cast<char>(-1))  << std::endl;

    return 0;
}