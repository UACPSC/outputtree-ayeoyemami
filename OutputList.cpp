/*
    OutputList.cpp

    Outputs a list
*/

#include "Leaf.hpp"
#include "List.hpp"
#include "SumVisitor.hpp"
#include <iostream>

int main() {

    // build a list
    List list(new List(new List(new Leaf(1))));

    // output list (existing operation)
    list.output();
    std::cout << '\n';

    // sum all leaf values (new operation via Visitor — no classes changed)
    SumVisitor sum;
    list.accept(sum);
    std::cout << "Sum: " << sum.result() << '\n';

    return 0;
}
