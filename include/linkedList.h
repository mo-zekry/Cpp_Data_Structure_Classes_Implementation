//
// Created by mohamed on 12/7/22.
//

#ifndef DATA_STRUCTURE_LINKEDLIST_HPP
#define DATA_STRUCTURE_LINKEDLIST_HPP

#include <iostream>

class Node {
  public:
  int data;
  Node *next;
};


class linkedList {
  public:
  linkedList();

  bool isEmpty() const;

  void addFirst(int value);

  void addLast(int value);

  void addBeforePosition(int position, int value);

  void deleteFirst();

  void deleteLast();

  void Display();

  void Clear();

  private:
  Node *head;
};


#endif//DATA_STRUCTURE_LINKEDLIST_HPP
