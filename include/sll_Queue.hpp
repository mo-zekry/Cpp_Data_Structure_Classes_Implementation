//
// Created by mohamed on 12/21/22.
//

#ifndef DATA_STRUCTURE_SLL_QUEUE_HPP
#define DATA_STRUCTURE_SLL_QUEUE_HPP

#include "linkedList.hpp"

class Sll_Queue {

  public:
  Sll_Queue();

  bool isEmpty();

  void EnQueue(int value);

  void DeQueue();

  int peek();

  void display();

  private:
  Node *front;
  Node *rear;
};


#endif//DATA_STRUCTURE_SLL_QUEUE_HPP
