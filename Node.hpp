/*
    Node.hpp

    Base node with output
*/

#ifndef INCLUDED_NODE_HPP
#define INCLUDED_NODE_HPP

// @pattern Composite @role Component
class Node {
public:

    // next node
    virtual Node* next() const = 0;

    // output
    virtual void output() const = 0;

    // current value
    virtual int value() const = 0;

    // destructor
    virtual ~Node() = default;
};

#endif
