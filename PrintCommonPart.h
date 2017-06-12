#ifndef PRINTCOMMONPART_H
#define PRINTCOMMONPART_H

#include <memory>

struct Node {
    int value;
    std::shared_ptr<Node> next;
    Node(int val = 0) : value(val), next(nullptr) {}
};

void printCommonPart(std::shared_ptr<Node> head1, std::shared_ptr<Node> head2);


#endif // PRINTCOMMONPART_H
