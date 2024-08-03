#include <iostream>
using namespace std;
 
struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};
 
struct LinkedList {
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* lastNode = head;
            while (lastNode->next != nullptr) {
                lastNode = lastNode->next;
            }
            lastNode->next = newNode;
        }
    }

    void deleteNode(int data) {
        if (head == nullptr) return;

        if (head->data == data) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* currentNode = head;
        while (currentNode->next != nullptr && currentNode->next->data != data) {
            currentNode = currentNode->next;
        }

        if (currentNode->next == nullptr) return;

        Node* nodeToDelete = currentNode->next;
        currentNode->next = currentNode->next->next;
        delete nodeToDelete;
    }

    void printList() const {
        Node* currentNode = head;
        while (currentNode != nullptr) {
            cout << currentNode->data << " ";
            currentNode = currentNode->next;
        }
        cout << endl;
    }
};
 
int main() {
    LinkedList list;
    list.insertAtBeginning(5);
    list.insertAtBeginning(10);
    list.insertAtEnd(43);
    list.insertAtEnd(4);
    list.insertAtEnd(3);

    cout << "Initial List: ";
    list.printList(); 

    list.deleteNode(43);
    cout << "List after deleting node with value 43: ";
    list.printList(); 

    return 0;
}