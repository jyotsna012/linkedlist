/*
 *Node Class File.
 *Jyotsna Tera
 *Jan 30, 2022
 */

#pragma once
#include "Student.h"

class Node{

 public:
  Node(Student* newS);
  Node* getNext(); //gets the next node
  Student* getStudent(); //sets the student
  void setNext(Node* nNext); //sets the next node
  ~Node();
 private:
  Student* student; //pointer to student
  Node* next; //pointer to the next node
};
