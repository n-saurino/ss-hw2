#pragma once
#include "ex1.cpp"
#include <utility>
#include <tuple>

/*
- Use `std::pair` and `std::tuple` to store and manipulate related data.
- Use `std::optional` to handle operations that may or may not return a value.
- Use `std::variant` to hold one of several possible types.
*/

int Ex3(){

    // Pair and Tuple Examples
    std::pair<int, int> coords = std::make_pair(0,0);
    coords.first = 1;
    coords.second = 2;

    std::cout << coords.first << ", " << coords.second << std::endl;

    std::tuple<int, char, int> tups(std::make_tuple(0, 'c', 1));
    std::get<0>(tups) = 7;
    std::cout << std::get<0>(tups) << ", " << std::get<1>(tups) << ", " << std::get<2>(tups) << std::endl;

    // std::optional examples
    

    return 0;
}