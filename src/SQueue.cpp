//
// Created by mohamed on 12/6/22.
//

#include "SQueue.hpp"

SQueue::SQueue() {
    front = -1;
    rear = -1;
}

//===//===//===//===//===//===//===//===//===//===//===/===//===//===//===//===//===/

bool SQueue::isEmpty() const {
    return (front == -1 && rear == -1);
}

//===//===//===//===//===//===//===//===//===//===//===/===//===//===//===//===//===/

bool SQueue::isFull() const {
    return rear == SIZE - 1;
}

//===//===//===//===//===//===//===//===//===//===//===/===//===//===//===//===//===/

void SQueue::EnQueue(int value) {
    if (isFull()) {
        std::cout << "Queue is Full" << std::endl;

    } else {
        if (isEmpty()) {
            front++;
            rear++;
            queue[front] = value;
        } else {
            rear++;
            queue[rear] = value;
        }
    }
}

//===//===//===//===//===//===//===//===//===//===//===/===//===//===//===//===//===/

void SQueue::DeQueue() {
    if (isEmpty()) {
        std::cerr << "Queue is empty" << std::endl;
    } else {
        front++;
    }
}

//===//===//===//===//===//===//===//===//===//===//===/===//===//===//===//===//===/

int SQueue::peek() {
    if (isEmpty()) {
        std::cerr << "Empty queue" << std::endl;
        return -1;
    } else {
        return queue[front];
    }
}

//===//===//===//===//===//===//===//===//===//===//===/===//===//===//===//===//===/

void SQueue::Display() {
    if (isEmpty()) {
        std::cerr << "Queue is empty" << std::endl;
    } else {
        std::cout << "Queue = [ ";
        for (int i = front; i <= rear; ++i) {
            std::cout << queue[i] << " <- ";
        }
        std::cout << " ]" << std::endl;
    }
}
