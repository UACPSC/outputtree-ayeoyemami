/*
    OutputList.cpp

    Outputs a list
*/

#include "Leaf.hpp"
#include "List.hpp"
#include <iostream>

int main() {

    // build a list
    List list(new List(new List(new Leaf(1))));

    // output list
    list.output();
    std::cout << '\n';

    return 0;
}
