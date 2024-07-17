#pragma once
#include "ex1.cpp"
#include <utility>
#include <tuple>
#include <variant>

/*
- Use `std::pair` and `std::tuple` to store and manipulate related data.
- Use `std::optional` to handle operations that may or may not return a value.
- Use `std::variant` to hold one of several possible types.
*/

// optional can be used as the return type of a factory that may fail
std::optional<std::string> create(bool b)
{
    if (b)
        return "Godzilla";
    return {};
}

int Ex3(){

    // Pair and Tuple Examples
    std::pair<int, int> coords{0,0};
    coords.first = 1;
    coords.second = 2;

    std::cout << coords.first << ", " << coords.second << std::endl;

    std::tuple<int, char, int> tups{0, 'c', 1};
    std::get<0>(tups) = 7;
    std::cout << std::get<0>(tups) << ", " << std::get<1>(tups) << ", " << std::get<2>(tups) << std::endl;

    // std::optional example
    std::cout << create(true).value_or("empty") << std::endl;

    // std::variant example
    std::variant<int, double> variant_ex;
    variant_ex = 42;
    std::cout << std::get<0>(variant_ex) << std::endl;
    variant_ex = 42.2;
    std::cout << std::get<1>(variant_ex) << std::endl;

    return 0;
}