#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

struct Node {
    int value;
    Node* next;
    Node(int val) : value(val) {}
};

#endif // NODE_H_INCLUDED
