//
// Created by user3301 on 5/8/2019.
//

#ifndef OJ_SINGLYLINKEDLISTNODE_H
#define OJ_SINGLYLINKEDLISTNODE_H

struct SinglyLinkedListNode {
public:
    int data;
    SinglyLinkedListNode* next;
    SinglyLinkedListNode(int data) {
        this->data = data;
        this->next = nullptr;
    }

};

#endif //OJ_SINGLYLINKEDLISTNODE_H
