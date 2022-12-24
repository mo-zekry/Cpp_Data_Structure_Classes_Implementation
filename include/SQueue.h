//
// Created by mohamed on 12/6/22.
//

#ifndef DATA_STRUCTURE_SQUEUE_HPP
#define DATA_STRUCTURE_SQUEUE_HPP

#include <iostream>

#define SIZE 5

class SQueue {
  public:
  SQueue();

  bool isEmpty();

  bool isFull();

  void EnQueue(int value);

  void DeQueue();

  int peek();

  void Display();

  private:
  int queue[SIZE] = {};
  int front;
  int rear;
};


#endif//DATA_STRUCTURE_SQUEUE_HPP
