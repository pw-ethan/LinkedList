#ifndef REMOVELASTKTHNODE_H
#define REMOVELASTKTHNODE_H

#include <memory>
#include "Node.h"
#include "DoubleNode.h"

std::shared_ptr<Node> removeLastKthNode(std::shared_ptr<Node> head, int k);
std::shared_ptr<DoubleNode> removeLastKthNode(std::shared_ptr<DoubleNode> head, int k);

#endif // REMOVELASTKTHNODE_H
