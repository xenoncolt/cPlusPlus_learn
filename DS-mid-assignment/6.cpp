/*
Name: Md. Shahriar Haque
ID: 23-51730-2
Course Name: Data Structure Lab
Section: N
*/
#include <iostream>
using namespace std;

struct Node {
    int  data;
    Node*  next;
};



void traverseList(Node* head) {
    Node*  current = head; 


    while (current != nullptr) { 
        cout << current->data << " ";
        current = current->next; 
    }
    cout << endl; 
}



int main() {
    Node* head = new Node{5, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{7, nullptr};
    head->next->next->next = new Node{24, nullptr};


    traverseList(head);

  
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
