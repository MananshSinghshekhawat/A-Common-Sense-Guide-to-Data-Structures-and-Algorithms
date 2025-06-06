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

 void pop_back()
{
    if(Head == NULL)
    {
        cout << "Linked List is empty \n";
        return;
    }
     Node *temp = Head;
    while(temp->next != Tail)
        {
            temp = temp->next;
        }

    temp->next = NULL;
    delete Tail;
    Tail =  temp;
}

void insert(int value , int pos )
{
    if(pos < 0)
    {
        cout << "invalid pos\n";
        return ;
    }
    if(pos == 0)
    {
        pop_front(value);
        return;
    }
     Node *temp = Head;
    for(int i = 0; i < pos-1; i++ )
        {
              temp = temp->next;
        }
    
     Node *newNode = new Node(value);
    newNode->next = temp->next;
    temp = temp->next;
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

int search(int key)
{
     Node *temp = Head;
    int Idx = 0;
    while(temp != Null)
        {
            if(temp->data == key)
            {
                return Idx;
            }
            temp = temp->next; 
            Idx++;
        }
    return -1;
}

};

int main()
{
    List ll;

    ll.push_front(50);
    ll.push_front(25);
    ll.push_front(75);
    ll.push_front(10);
    ll.push_front(33);
    ll.push_front(56);
    ll.push_front(89);
    ll.push_front(4);
    ll.push_front(11);
    ll.push_front(30);

    ll.push_back(7);

    ll.pop_front();

    ll.printll();
    ll.pop_back();
    ll.insert(7,5);
    ll.printll();
    cout << search(5) << endl;

    return 0;
}
