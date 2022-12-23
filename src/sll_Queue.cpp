//
// Created by mohamed on 12/21/22.
//

#include "sll_Queue.h"

Sll_Queue::Sll_Queue() {
    front = rear = nullptr;
}

//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//

bool Sll_Queue::isEmpty() {
    return front == nullptr;
}

//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//

void Sll_Queue::EnQueue(int value) {
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    if (isEmpty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//

void Sll_Queue::DeQueue() {
    Node *current = front;
    if (isEmpty()) {
        std::cout << "Empty Queue!!" << std::endl;
    } else if (front == rear) {
        front = rear = nullptr;
        delete (current);
    } else {
        front = front->next;
        delete current;
    }
}

//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//

int Sll_Queue::peek() {
    return front->data;
}

//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//≣≣≣//

void Sll_Queue::display() {
    if (isEmpty()) {
        std::cout << "Empty Queue!!" << std::endl;
    }
    Node *current = front;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

