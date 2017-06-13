#include <iostream>
#include <vector>
#include <memory>

#include "PrintCommonPart.h"
#include "RemoveLastKthNode.h"

using namespace std;

template <typename T>
void print(shared_ptr<T> head) {
    shared_ptr<T> cur = head;
    while(cur != nullptr) {
        cout << cur->value << " ";
        cur = cur->next;
    }
    cout << endl;
}

int main()
{

// 2. remove last k'th node
//    vector<int> v1 = {2, 4, 5, 6, 8};
//    shared_ptr<Node> head(new Node);
//    shared_ptr<Node> tail = head;
//    for(auto i : v1) {
//        shared_ptr<Node> tmp(new Node(i));
//        tail->next = tmp;
//        tail = tmp;
//    }
//    head = head->next;
//    print(head);
//    head = removeLastKthNode(head, 5); // will return new head
//    print(head);

    vector<int> v1 = {2, 4, 5, 6, 8};
    shared_ptr<DoubleNode> head(new DoubleNode);
    shared_ptr<DoubleNode> tail = head;
    for(auto i : v1) {
        shared_ptr<DoubleNode> tmp(new DoubleNode(i));
        tail->next = tmp;
        tmp->previous = tail;
        tail = tmp;
    }
    head = head->next;
    print(head);
    head = removeLastKthNode(head, 5); // will return new head
    print(head);
// DoubleNode's dtor will not be called, because the counter of shared_ptr is not 0
// So shared_ptr is not absolutely safe,  Memory Leaks may occur


// 1. print common part of two linked lists, which is ordered
//    vector<int> v1 = {2, 4, 5, 6, 8};
//    vector<int> v2 = {1, 2, 3, 5, 6};
//
//    shared_ptr<Node> head(new Node);
//    shared_ptr<Node> tail = head;
//    for(auto i : v1) {
//        shared_ptr<Node> tmp(new Node(i));
//        tail->next = tmp;
//        tail = tmp;
//    }
//    shared_ptr<Node> head1 = head->next;
//    tail = head;
//    for(auto i : v2) {
//        shared_ptr<Node> tmp(new Node(i));
//        tail->next = tmp;
//        tail = tmp;
//    }
//    shared_ptr<Node> head2 = head->next;
//
//    printCommonPart(head1, head2);

    return 0;
}
