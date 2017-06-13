#include "RemoveLastKthNode.h"

std::shared_ptr<Node> removeLastKthNode(std::shared_ptr<Node> head, int k) {
    if(head == nullptr || k < 1) {
        return head;
    }
    std::shared_ptr<Node> cur = head;
    while(cur != nullptr && k != 0) {
        cur = cur->next;
        --k;
    }
    if(k == 0) {
        std::shared_ptr<Node> newHeadHead(new Node);
        newHeadHead->next = head;
        std::shared_ptr<Node> pre = newHeadHead;
        while(cur != nullptr) {
            pre = pre->next;
            cur = cur->next;
        }
        pre->next = pre->next->next;
        head = newHeadHead->next; // if remove head
    }
    return head;
}


std::shared_ptr<DoubleNode> removeLastKthNode(std::shared_ptr<DoubleNode> head, int k) {
    if(head == nullptr || k < 1) {
        return head;
    }
    std::shared_ptr<DoubleNode> cur = head;
    while(cur != nullptr && k != 0) {
        cur = cur->next;
        --k;
    }
    if(k == 0) {
        std::shared_ptr<DoubleNode> newHeadHead(new DoubleNode);
        newHeadHead->next = head;
        head->previous = newHeadHead;
        std::shared_ptr<DoubleNode> pre = newHeadHead;
        while(cur != nullptr) {
            pre = pre->next;
            cur = cur->next;
        }
        pre->next = pre->next->next;
        if(pre->next != nullptr) {
            pre->next->previous = pre;
        }
        head = newHeadHead->next; // if remove head
    }
    return head;
}
