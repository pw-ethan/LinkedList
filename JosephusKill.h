#ifndef JOSEPHUSKILL_H
#define JOSEPHUSKILL_H

#include <Node.h>

std::shared_ptr<Node> JosephusKill(std::shared_ptr<Node> head, int m);
std::shared_ptr<Node> JosephusKillEx(std::shared_ptr<Node> head, int m);
int getLive(int i, int m);
#endif // JOSEPHUSKILL_H
