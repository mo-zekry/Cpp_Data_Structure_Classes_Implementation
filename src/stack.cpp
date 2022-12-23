//
// Created by mohamed on 12/11/22.
//

#include "stack.h"

Stack::Stack() : top(-1) {
}

//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//

bool Stack::isEmpty() {
    return top == -1;
}

//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//

bool Stack::isFull() {
    return top == SIZE - 1;
}

//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//

void Stack::push(int value) {
    if (isFull()) {
        std::clog << "Full Stack!!" << std::endl;
    } else {
        top++;
        stack[top] = value;
    }
}

//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//

void Stack::pop() {
    if (isEmpty()) {
        std::clog << "Empty Stack!!" << std::endl;
    } else {
        top--;
    }
}

//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//

int Stack::getTop() {
    if (isEmpty()) {
        std::clog << "Empty Stack!!" << std::endl;
        return -1;
    } else {
        return stack[top];
    }
}

//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//===//

void Stack::Display() {
    if (isEmpty()) {
        std::clog << "Empty Stack!!" << std::endl;
    } else {
        for (int i = top; i > -1; i--) {
            std::cout << "|" << stack[i] << "|" << std::endl;
        }
    }
}

void Stack::Remove() {
    if (isEmpty()) {
        std::clog << "Empty Stack!!" << std::endl;
    } else {
        for (int i = top; i > -1; i--) {
            top--;
        }
    }
}
