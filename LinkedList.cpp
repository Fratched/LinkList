#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
}

void LinkedList::insertAtHead(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = tail = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
}

void LinkedList::insertAtTail(int value) {
    Node* newNode = new Node(value);
    if (tail == nullptr) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

void LinkedList::deleteHead() {
    if (head == nullptr) return;
    Node* temp = head;
    head = head->next;
    delete temp;
    if (head == nullptr) tail = nullptr;
}

void LinkedList::deleteTail() {
    if (tail == nullptr) return;
    if (head == tail) {
        delete head;
        head = tail = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = nullptr;
}

void LinkedList::sort() {
    if (head == nullptr) return;
    bool swapped;
    do {
        swapped = false;
        Node* current = head;
        while (current->next != nullptr) {
            if (current->data > current->next->data) {
                swap(current->data, current->next->data);
                swapped = true;
            }
            current = current->next;
        }
    } while (swapped);
}

void LinkedList::draw() {
    Node* current = head;
    while (current != nullptr) {
        current->draw();
        if (current->next != nullptr) {
            ofDrawLine(current->position, current->next->position); // Draw a line to the next node
        }
        current = current->next;
    }
}