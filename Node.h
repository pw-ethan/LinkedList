#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include <iostream>
#include <memory>

struct Node {
    int value;
    std::shared_ptr<Node> next;
    Node(int val = 0) : value(val), next(nullptr) {
        std::cout << "Node() " << value << std::endl;
    }
    ~Node() {
        std::cout << "~Node() " << value << std::endl;
    }
};

#endif // NODE_H_INCLUDED
