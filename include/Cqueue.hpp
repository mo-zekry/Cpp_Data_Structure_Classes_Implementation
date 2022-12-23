//
// Created by mohamed on 12/6/22.
//

#ifndef DATA_STRUCTURE_CQUEUE_HPP
#define DATA_STRUCTURE_CQUEUE_HPP

#include <iostream>

constexpr auto SIZE = 5;

class Cqueue {
public:
    Cqueue();

    bool isEmpty();

    bool isFull();

    void Enqueue(int value);

    void Dequeue();

    int peek();

    void Display();

private:
    int queue[SIZE] = {};
    int front;
    int rear;
};


#endif//DATA_STRUCTURE_CQUEUE_HPP
