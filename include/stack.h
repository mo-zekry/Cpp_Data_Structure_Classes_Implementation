//
// Created by mohamed on 12/11/22.
//

#ifndef DATA_STRUCTURE_STACK_H
#define DATA_STRUCTURE_STACK_H

#include <array>
#include <iostream>

#define SIZE 5

class Stack {
public:
    Stack();

    bool isEmpty();

    bool isFull();

    void push(int value);

    void pop();

    int getTop();

    void Display();

    void Remove();

private:
    int stack[SIZE] = {};
    int top;
};


#endif//DATA_STRUCTURE_STACK_H
