// this is an eg of doubly linked list
#include <iostream>
#include<algorithm>
using namespace std;


struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
private:
    Node* Head;

public:
    DoublyLinkedList() {
        Head = NULL;
    }

    // Insert at the end
    void append(int value) {
        Node* newNode = new Node(value);
        if (Head == NULL) {
            Head = newNode;
            return;
        }

        Node* temp = Head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    // Delete a node by value
    void deleteNode(int value) {
        Node* temp = Head;

        while (temp != NULL) {
            if (temp->data == value) {
                if (temp->prev != NULL)
                    temp->prev->next = temp->next;
                else
                    Head = temp->next;

                if (temp->next != NULL)
                    temp->next->prev = temp->prev;

                delete temp;
                return;
            }
            temp = temp->next;
        }
    }

    // Display the list
    void display() {
        Node* temp = Head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};


int main() {
    DoublyLinkedList dll;

    dll.append(10);
    dll.append(20);
    dll.append(30);

    cout << "Doubly Linked List:" << endl;
    dll.display();

    cout << "After deleting 20:" << endl;
    dll.deleteNode(20);
    dll.display();

    return 0;
}
