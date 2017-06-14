#include "ReversePart.h"

std::shared_ptr<Node> ReversePart(std::shared_ptr<Node> head, int from, int to) {
    std::shared_ptr<Node> newHead(new Node);
    newHead->next = head;

    std::shared_ptr<Node> cur = newHead;
    std::shared_ptr<Node> fPre = nullptr;
    std::shared_ptr<Node> tNext = nullptr;
    int n = -1;
    while (cur != nullptr) {
        n++;
        if(from - 1 == n) {
            fPre = cur;
        }
        if(to + 1 == n) {
            tNext = cur;
        }
        cur = cur->next;
    }

    if(from > to || from < 1 || to > n) {
        return head;
    }

    cur = fPre->next;
    std::shared_ptr<Node> next = nullptr;
    std::shared_ptr<Node> pre = tNext;
    while(cur != tNext) {
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    fPre->next = pre;
    return newHead->next;
}
