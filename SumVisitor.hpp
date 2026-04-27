/*
    SumVisitor.hpp

    Sums all leaf values in the tree.
    New operation added without changing Node, List, or Leaf.

    @pattern Visitor @role ConcreteVisitor
*/

#ifndef INCLUDED_SUMVISITOR_HPP
#define INCLUDED_SUMVISITOR_HPP

#include "Visitor.hpp"
#include "List.hpp"
#include "Leaf.hpp"

class SumVisitor : public Visitor {
public:

    // traverse into the list's next node
    void visit(List& list) override {

        if (list.next())
            list.next()->accept(*this);
    }

    // accumulate leaf value
    void visit(Leaf& leaf) override {

        total += leaf.value();
    }

    // return the accumulated sum
    int result() const { return total; }

private:
    int total = 0;
};

#endif
