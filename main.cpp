#include "Student.h"
#include "Node.h"
#include <cstring>
#include <iostream>

using namespace std;
int main(){

  cout << "Enter the name of the first student" << endl;
  char name1[80] = "";
  cin.get(name1,80);
  cin.get();
  Student* student1 = new Student(name1);
  Node* head = new Node(student1);
  
  cout << "Enter the name of the second student" << endl;
  char name2[80] = "";
  cin.get(name2,80);
  cin.get();
  Student* student2 = new Student(name2);
  Node* next = new Node(student2);
  
  head->setNext(next);
  Node* cNode = head;
  
  while(0==0){

    cout << "Here are the names of the students" << endl;
    cout << (cNode->getStudent())->getName() << endl;
    if(cNode->getNext()==NULL){

      break;

    }
    cNode = cNode->getNext();
    
  }
  return 0;
  
}
