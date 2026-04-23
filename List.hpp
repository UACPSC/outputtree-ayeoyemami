/*
    List.hpp

    Include for List node with output
*/

#ifndef INCLUDED_LIST_HPP
#define INCLUDED_LIST_HPP

#include "Node.hpp"

// @pattern Composite @role List
class List : public Node {
public:

    // constructor
    List(Node* node);

    // next node
    Node* next() const override;

    // output
    void output() const override;

    // current value
    int value() const override;

    // destructor
    ~List() override;

private:
    Node* nextNode = nullptr;
};

#endif
