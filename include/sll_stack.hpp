//
// Created by mohamed on 12/11/22.
//

#ifndef DATA_STRUCTURE_SLL_STACK_HPP
#define DATA_STRUCTURE_SLL_STACK_HPP

#include "linkedList.hpp"
#include <iostream>

class Sll_stack {
public:
    Sll_stack();

    bool isEmpty();

    void push(int value);

    void pop();

    int getTop();

    void Display();

    void Remove();

private:
    Node *top;
};


#endif //DATA_STRUCTURE_SLL_STACK_HPP
