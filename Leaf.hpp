/*
    Leaf.hpp

    Include for Leaf node with output
*/

#ifndef INCLUDED_LEAF_HPP
#define INCLUDED_LEAF_HPP

#include "Node.hpp"
#include "Visitor.hpp"

// @pattern Composite @role Leaf
class Leaf : public Node {
public:

    // constructor
    Leaf(int n);

    // next node
    Node* next() const override;

    // output
    void output() const override;

    // current value
    int value() const override;

    // accept a visitor
    void accept(Visitor& visitor) override;

private:
    int nodeValue;
};

#endif
