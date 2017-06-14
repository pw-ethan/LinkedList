#include "RemoveMidNode.h"

#include <math.h>
#include <iostream>

std::shared_ptr<Node> RemoveMidNode(std::shared_ptr<Node> head) {
    if(head == nullptr || head->next == nullptr) {
        return head;
    }

//    if(head->next->next == nullptr) {
//        return head->next;
//    }
//    std::shared_ptr<Node> pre = head;
//    std::shared_ptr<Node> cur = head->next->next;

    std::shared_ptr<Node> newhead(new Node);
    newhead->next = head;
    std::shared_ptr<Node> pre = newhead;
    std::shared_ptr<Node> cur = newhead->next;

    while(cur->next != nullptr && cur->next->next != nullptr) {
        pre = pre->next;
        cur = cur->next->next;
    }
    pre->next = pre->next->next;

//    return head;
    return newhead->next;
}

std::shared_ptr<Node> RemoveByRatio(std::shared_ptr<Node> head, int a, int b) {
    if(head == nullptr || a < 1 || a > b) {
        return head;
    }
    int n = 0;
    std::shared_ptr<Node> cur = head;
    while(cur != nullptr) {
        ++n;
        cur = cur->next;
    }
    int k = (int)ceil(((double)(a * n)) / (double) b);

    std::shared_ptr<Node> newhead(new Node);
    newhead->next = head;
    cur = newhead;
    while(k-- != 1) {
        cur = cur->next;
    }
    cur->next = cur->next->next;

    return newhead->next;
}
