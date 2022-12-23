//
// Created by mohamed on 12/11/22.
//

#include "sll_stack.h"

Sll_stack::Sll_stack() : top(nullptr) {}

//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//

bool Sll_stack::isEmpty() {
    return top == nullptr;
}

//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//

void Sll_stack::push(int value) {
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (isEmpty()) {
        top = newNode;
    } else {
        newNode->next = top;
        top = newNode;
    }
}

//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//

void Sll_stack::pop() {
    if (isEmpty()) {
        std::cout << "Empty Stack!!" << std::endl;
        return;
    } else {
        Node *NodeInTop = top;
        top = top->next;
        delete NodeInTop;
    }
}

//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//

int Sll_stack::getTop() {
    if (isEmpty()) {
        std::cout << "Empty Stack!!" << std::endl;
    } else {
        return top->data;
    }
}

//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//

void Sll_stack::Display() {
    if (isEmpty()) {
        std::cout << "Empty Stack!!" << std::endl;
    } else {
        Node *current = top;
        while (current != nullptr) {
            std::cout << "|" << current->data << "|" << std::endl;
            current = current->next;
        }
    }
}

//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//

void Sll_stack::Remove() {
    if (isEmpty()) {
        std::cout << "Empty Stack!!" << std::endl;
    } else {
        Node *current = top;
        while (current != nullptr) {
            top = top->next;
            delete current;
            current = top;
        }
    }
}
