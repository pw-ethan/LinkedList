#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include <iostream>

struct Node {
    int value;
    std::shared_ptr<Node> next;
    Node(int val = 0) : value(val), next(nullptr) {}
};

#endif // NODE_H_INCLUDED
