#ifndef REVERSELIST_H
#define REVERSELIST_H

#include "Node.h"
#include "DoubleNode.h"
#include <memory>

std::shared_ptr<Node> ReverseList(std::shared_ptr<Node> head);
std::shared_ptr<DoubleNode> ReverseList(std::shared_ptr<DoubleNode> head);

#endif // REVERSELIST_H
