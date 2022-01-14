#include "node.h"
#include "student.h"
#include <iostream>

using namespace std;

Node::Node(Student* newS)
{
  next = NULL;
  student = newS;
}

Node* Node::getNext()
{
  return next;
}

void Node::setNext(Node* nNext)
{
  next = nNext;
}

Student* Node::getStudent()
{
  return student;
}

Node::~Node()
{
  delete student;
}
