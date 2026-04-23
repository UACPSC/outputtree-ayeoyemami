/*
    List.cpp

    Implementation for List node with output
*/

#include "List.hpp"
#include <iostream>

// constructor
List::List(Node* node)
    : nextNode(node)
{}

// next node
Node* List::next() const {

    return nextNode;
}

// output
void List::output() const {

    // output rest of list wrapped with parentheses
    if (nextNode) {

        std::cout << "(";

        nextNode->output();

        std::cout << ")";
    }
}

// current value
int List::value() const {

    return 0;
}

// destructor
List::~List() {

    // delete the rest of the list first
    if (nextNode)
        delete nextNode;
}

