//
// Created by mohamed on 12/6/22.
//

#include "Cqueue.hpp"

Cqueue::Cqueue() : front(-1), rear(-1) {
}

//===//===//===//===//===//===//===//===//===//===//===/===//===//===//===//===//===/

bool Cqueue::isEmpty() {
    return (front == -1 && rear == -1);
}

//===//===//===//===//===//===//===//===//===//===//===/===//===//===//===//===//===/

bool Cqueue::isFull() {
    if (front == 0 && rear == SIZE - 1) {
        return true;
    } else if (front == rear + 1) {
        return true;
    } else {
        return false;
    }
}

//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===/

void Cqueue::Enqueue(int value) {
    if (isFull()) {
        std::cout << "Queue is full" << std::endl;
    } else {
        if (isEmpty()) {
            front++;
            rear++;
            queue[rear] = value;
        } else {
            rear = (rear + 1) % SIZE;
            queue[rear] = value;
        }
        std::cout << "Inserting..." << value << std::endl;
    }
}

//===//===//===//===//===//===//===//===//===//===//===/===//===//===//===//===//===/

void Cqueue::Dequeue() {
    if (isEmpty()) {
        std::cout << "Empty queue!" << std::endl;
    } else {
        std::cout << "Deleting..." << queue[front] << std::endl;
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
    }
}

//===//===//===//===//===//===//===//===//===//===//===/===//===//===//===//===//===/

int Cqueue::peek() {
    if (isEmpty()) {
        std::cout << "Empty queue" << std::endl;
        return -1;
    } else {
        return queue[front];
    }
}

//===//===//===//===//===//===//===//===//===//===//===/===//===//===//===//===//===/

void Cqueue::Display() {
    if (isEmpty()) {
        std::cout << "Empty queue" << std::endl;
    } else {

        if (front <= rear) {
            std::cout << "Queue = [ ";
            for (int i = front; i <= rear; ++i) {
                std::cout << queue[i] << " <- ";
            }
            std::cout << " ]" << std::endl;
        } else {
            std::cout << "Queue = [ ";
            //------------------------------------------------
            for (int i = front; i < SIZE; ++i) {
                std::cout << queue[i] << " <- ";
            }
            //------------------------------------------------
            for (int i = 0; i <= rear; ++i) {
                std::cout << queue[i] << " <- ";
            }
            //------------------------------------------------
            std::cout << " ]" << std::endl;
        }
    }
}

//===//===//===//===//===//===//===//===//===//===//===/===//===//===//===//===//===/
