#include "PrintCommonPart.h"

#include <iostream>

void printCommonPart(std::shared_ptr<Node> head1, std::shared_ptr<Node> head2) {
    std::cout << "Common Part : ";
    while(head1 != NULL && head2 != NULL) {
        if(head1->value < head2->value) {
            head1 = head1->next;
        } else if(head1->value > head2->value) {
            head2 = head2->next;
        } else {
            std::cout << head1->value << " ";
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    std::cout << std::endl;
}

