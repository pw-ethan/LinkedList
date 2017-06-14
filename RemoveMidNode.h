#ifndef REMOVEMIDNODE_H
#define REMOVEMIDNODE_H

#include <memory>
#include "Node.h"

std::shared_ptr<Node> RemoveMidNode(std::shared_ptr<Node> head);
std::shared_ptr<Node> RemoveByRatio(std::shared_ptr<Node> head, int a, int b);

#endif // REMOVEMIDNODE_H
