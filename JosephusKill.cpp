#include "JosephusKill.h"

std::shared_ptr<Node> JosephusKill(std::shared_ptr<Node> head, int m) {
    if(head == nullptr || head->next == nullptr || m < 1) {
        return head;
    }
    std::shared_ptr<Node> last = head;
    while(last->next != head) {
        last = last->next;
    }
    int cnt = 0;
    while(head != last) {
        if(++cnt == m) {
            last->next = head->next;
            cnt = 0;
        } else {
            last = last->next;
        }
        head = last->next;
    }
    return head;
}

std::shared_ptr<Node> JosephusKillEx(std::shared_ptr<Node> head, int m) {
    if(head == nullptr || head->next == nullptr || m < 1) {
        return head;
    }
    std::shared_ptr<Node> cur = head->next;
    int tmp = 1;
    while(cur != head) {
        tmp++;
        cur = cur->next;
    }
    tmp = getLive(tmp, m);
    while(--tmp != 0) {
        head = head->next;
    }
    head->next = head;
    return head;
}

int getLive(int i, int m) {
    if(i == 1) {
        return 1;
    }
    return (getLive(i - 1, m) + m - 1) % i + 1;
}
