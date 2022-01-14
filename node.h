#pragma once
#include "Student.h"

class Node{

 public:
  Node(Student* newS);
  Node* getNext();
  Student* getStudent();
  void setNext(Node* nNext);
  ~Node();
 private:
  Student* student;
  Node* next;
};
