#include "ReverseList.h"

std::shared_ptr<Node> ReverseList(std::shared_ptr<Node> head) {
    std::shared_ptr<Node> pre = nullptr;
    std::shared_ptr<Node> nxt = nullptr;
    while(head != nullptr) {
        nxt = head->next;
        head->next = pre;
        pre = head;
        head = nxt;
    }
    return pre;
}

std::shared_ptr<DoubleNode> ReverseList(std::shared_ptr<DoubleNode> head) {
    std::shared_ptr<DoubleNode> pre = nullptr;
    std::shared_ptr<DoubleNode> next = nullptr;
    while(head != nullptr) {
        next = head->next;
        head->next = pre;
        head->previous = next;
        pre = head;
        head = next;
    }
    return pre;
}
