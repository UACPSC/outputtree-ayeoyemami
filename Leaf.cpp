/*
    Leaf.cpp

    Implementation for Leaf node with output
*/

#include "Leaf.hpp"
#include "Visitor.hpp"
#include <iostream>

// constructor
Leaf::Leaf(int value)
    : nodeValue(value)
{}

// next node
Node* Leaf::next() const {
    return 0;
}

// output
void Leaf::output() const {
    std::cout << nodeValue;
}

// current value
int Leaf::value() const {
    return nodeValue;
}

// accept a visitor
void Leaf::accept(Visitor& visitor) {

    visitor.visit(*this);
}
