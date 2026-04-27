/*
    Visitor.hpp

    Abstract visitor interface

    @pattern Visitor @role Visitor
*/

#ifndef INCLUDED_VISITOR_HPP
#define INCLUDED_VISITOR_HPP

class List;
class Leaf;

class Visitor {
public:

    // visit a List node
    virtual void visit(List& list) = 0;

    // visit a Leaf node
    virtual void visit(Leaf& leaf) = 0;

    // destructor
    virtual ~Visitor() = default;
};

#endif
