#include <iostream>
#include <vector>
#include <memory>

#include "PrintCommonPart.h"

using namespace std;

int main()
{

// print common part of two linked lists, which is ordered
    vector<int> v1 = {2, 4, 5, 6, 8};
    vector<int> v2 = {1, 2, 3, 5, 6};

    shared_ptr<Node> head(new Node);
    shared_ptr<Node> tail = head;
    for(auto i : v1) {
        shared_ptr<Node> tmp(new Node(i));
        tail->next = tmp;
        tail = tmp;
    }
    shared_ptr<Node> head1 = head->next;
    tail = head;
    for(auto i : v2) {
        shared_ptr<Node> tmp(new Node(i));
        tail->next = tmp;
        tail = tmp;
    }
    shared_ptr<Node> head2 = head->next;

    printCommonPart(head1, head2);

    return 0;
}
