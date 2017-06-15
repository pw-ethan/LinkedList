#include <iostream>
#include <vector>
#include <memory>

#include "PrintCommonPart.h"
#include "RemoveLastKthNode.h"
#include "RemoveMidNode.h"
#include "ReverseList.h"
#include "ReversePart.h"
#include "JosephusKill.h"

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

void printRing(shared_ptr<Node> head) {
    shared_ptr<Node> cur = head->next;
    cout << head->value << " ";
    while(cur != head) {
        cout << cur->value << " ";
        cur = cur->next;
    }
    cout << endl;
}

int main()
{

// 6. josephus kill
//    vector<int> v1 = {1, 2, 3, 4, 5};
//    shared_ptr<Node> head(new Node);
//    shared_ptr<Node> tail = head;
//    for(auto i : v1) {
//        shared_ptr<Node> tmp(new Node(i));
//        tail->next = tmp;
//        tail = tmp;
//    }
//    head = head->next;
//    tail->next = head;
//    printRing(head);
//    head = JosephusKill(head, 3);
//    head = JosephusKillEx(head, 3);
//    printRing(head);
//    head->next = nullptr;


// 5. reverse part
//    vector<int> v1 = {1, 2, 3, 4, 5};
//    shared_ptr<Node> head(new Node);
//    shared_ptr<Node> tail = head;
//    for(auto i : v1) {
//        shared_ptr<Node> tmp(new Node(i));
//        tail->next = tmp;
//        tail = tmp;
//    }
//    head = head->next;
//    print(head);
//    int from, to;
//    cin >> from >> to;
//    head = ReversePart(head, from, to);
//    print(head);



// 4. reverse list
//    vector<int> v1 = {1, 2, 3, 4, 5};
//    shared_ptr<Node> head(new Node);
//    shared_ptr<Node> tail = head;
//    for(auto i : v1) {
//        shared_ptr<Node> tmp(new Node(i));
//        tail->next = tmp;
//        tail = tmp;
//    }
//    head = head->next;
//    print(head);
//    head = ReverseList(head);
//    print(head);

//    vector<int> v1 = {2, 4, 5, 6, 8};
//    shared_ptr<DoubleNode> head(new DoubleNode);
//    shared_ptr<DoubleNode> tail = head;
//    for(auto i : v1) {
//        shared_ptr<DoubleNode> tmp(new DoubleNode(i));
//        tail->next = tmp;
//        tmp->previous = tail;
//        tail = tmp;
//    }
//    head = head->next;
//    print(head);
//    head = ReverseList(head);
//    print(head);


// 3. remove middle node (and a/b)
//    vector<int> v1 = {1, 2, 3, 4, 5};
//    shared_ptr<Node> head(new Node);
//    shared_ptr<Node> tail = head;
//    for(auto i : v1) {
//        shared_ptr<Node> tmp(new Node(i));
//        tail->next = tmp;
//        tail = tmp;
//    }
//    head = head->next;
//    print(head);
//    head = RemoveByRatio(head, 3, 5);
//    //head = RemoveMidNode(head);
//    print(head);


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

//    vector<int> v1 = {2, 4, 5, 6, 8};
//    shared_ptr<DoubleNode> head(new DoubleNode);
//    shared_ptr<DoubleNode> tail = head;
//    for(auto i : v1) {
//        shared_ptr<DoubleNode> tmp(new DoubleNode(i));
//        tail->next = tmp;
//        tmp->previous = tail;
//        tail = tmp;
//    }
//    head = head->next;
//    print(head);
//    head = removeLastKthNode(head, 5); // will return new head
//    print(head);
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
