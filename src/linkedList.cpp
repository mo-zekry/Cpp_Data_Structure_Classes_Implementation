//
// Created by mohamed on 12/7/22.
//

#include "linkedList.h"

linkedList::linkedList() : head(nullptr) {}

//===//===//===////===//===//===////===//===//===////===//===//===////===//===//===////===//===//===//

bool linkedList::isEmpty() const {
    return head == nullptr;
}

//===//===//===////===//===//===////===//===//===////===//===//===////===//===//===////===//===//===//

void linkedList::addFirst(int value) {
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (isEmpty()) {
        head = newNode;
    }
    newNode->next = head;
    head = newNode;
}

//===//===//===////===//===//===////===//===//===////===//===//===////===//===//===////===//===//===//

void linkedList::addLast(int value) {
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (isEmpty()) {
        head = newNode;
    } else {
        Node *curNode = head;
        while (curNode->next != nullptr) {
            curNode = curNode->next;
        }
        curNode->next = newNode;
    }
}

//===//===//===////===//===//===////===//===//===////===//===//===////===//===//===////===//===//===//

void linkedList::deleteFirst() {
    if (isEmpty()) {
        std::cout << "Empty list" << std::endl;
    }
    Node *curNode = head;
    head = curNode->next;
    delete curNode;
}


//===//===//===////===//===//===////===//===//===////===//===//===////===//===//===////===//===//===//

void linkedList::deleteLast() {
    if (isEmpty()) {
        std::cout << "Empty list" << std::endl;
    } else {
        Node *curNode = head;
        while (curNode->next->next != nullptr) {
            curNode = curNode->next;
        }
        delete curNode->next;
        curNode->next = nullptr;
    }
}

//===//===//===////===//===//===////===//===//===////===//===//===////===//===//===////===//===//===//

void linkedList::Display() {
    if (isEmpty()) {
        std::cout << "Empty list!!" << std::endl;
    } else {
        Node *curNode = head;
        std::cout << "list = [ ";
        while (curNode != nullptr) {
            std::cout << curNode->data << "<--";
            curNode = curNode->next;
        }
        std::cout << " ]" << std::endl;
    }
}

//===//===//===////===//===//===////===//===//===////===//===//===////===//===//===////===//===//===//

void linkedList::Clear() {
    if (isEmpty()) {
        std::cout << "Empty list" << std::endl;
    } else {
        Node *curNode = head;
        while (curNode != nullptr) {
            head = curNode->next;
            delete curNode;
            curNode = head;
        }
    }
}

//===//===//===////===//===//===////===//===//===////===//===//===////===//===//===////===//===//===//

void linkedList::addBeforePosition(int position, int value) {
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (isEmpty()) {
        std::cout << "Empty list!!" << std::endl;
    } else {
        Node *curNode = head;
        Node *prevNode = head;
        while (curNode != nullptr && curNode->data != value) {
            prevNode = curNode;
            curNode = curNode->next;
        }
        newNode->next = curNode;
        prevNode->next = newNode;
    }
}
