// implementation of linked list
// push-front = pop front
// push-back = pop- back

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Node
{
public:
    int data;
    Node *next; // to store the data or link to the next node

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class List
{
    Node *Head;
    Node *Tail;

public:
    List()
    {
        Head = Tail = NULL;
    }

    void push_front(int value)
    {
        Node *newNode = new Node(value); // dynamic call
        // Node newNode(value); // static creation of the value
        if (Head == NULL)
        {
            Head = Tail = newNode;
            return;
        }
        else
        {
            newNode->next = Head;
        }
    }

    void push_back(int value)
    {
        Node *newNode = new Node(value);

        if (Head == NULL)
        {
            Head = Tail = newNode;
        }
        else
        {
            Tail->next = newNode;
            Tail = newNode;
        }
    }

    void pop_front()
    {
        if (Head == NULL)
        {
            cout << "Linked List is empty \n";
            return;
        }

        Node *temp = Head;
        Head = Head->next;
        temp->next = NULL;

        delete temp;
    }

    void printll()
    {
        Node *temp;

        while (temp != NULL)
        {
            cout << temp->data << " ->";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main()
{
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.push_front(6);

    ll.push_back(7);

    ll.pop_front();

    ll.printll();

    return 0;
}
