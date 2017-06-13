#ifndef DOUBLENODE_H_INCLUDED
#define DOUBLENODE_H_INCLUDED

#include <memory>

struct DoubleNode {
    int value;
    std::weak_ptr<DoubleNode> previous;
    std::shared_ptr<DoubleNode> next;
    DoubleNode(int val = 0) : value(val) {
        std::cout << "DoubleNode() " << value << std::endl;
    }
    ~DoubleNode() {
        std::cout << "~DoubleNode() " << value << std::endl;
    }
};

#endif // DOUBLENODE_H_INCLUDED
