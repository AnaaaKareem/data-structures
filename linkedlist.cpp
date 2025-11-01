#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

class linkedList {
    public:
        Node* head;
        
        linkedList() {
            head = NULL;
        }

        bool isEmpty() {
            return head == NULL;
        }

        void display() {
            Node* current = head;
            while (current != NULL)
        }

        void insertBeginning(int data) {
            Node* newNode = new Node(data);
            if (head == NULL) {
                head = newNode;
            }
            else {
                newNode->next = head;
                head = newNode;
            }
        }
};