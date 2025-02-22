#pragma once
#include "Node.h"

class LinkedList {
public:
    Node* head; // Pointer to the head of the list
    Node* tail; // Pointer to the tail of the list

    LinkedList();
    void insertAtHead(int value);
    void insertAtTail(int value);
    void deleteHead();
    void deleteTail();
    void sort();
    void draw();
};