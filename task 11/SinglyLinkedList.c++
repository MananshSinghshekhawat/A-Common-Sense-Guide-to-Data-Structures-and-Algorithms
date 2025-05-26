#include <iostream>
#include<algorithm>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};


Node* Head = NULL;

// Function to insert at the end
void insert(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (Head == NULL) {
        Head = newNode;
    } else {
        Node* temp = Head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

// Function to display the list
void display() {
    Node* temp = Head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}


int main() {
    insert(10);
    insert(20);
    insert(30);

    cout << "Linked List: ";
    display();

    return 0;
}

