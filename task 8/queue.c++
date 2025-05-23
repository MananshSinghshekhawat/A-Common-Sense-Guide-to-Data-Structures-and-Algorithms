#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
private:
    int front, rear;
    int arr[1000];
    int capacity;

public:
    Solution(int size = 1000)
    {
        front = rear = -1;
        capacity = size;
    }

    // step 1 = enqueue() insert an element from the back of the queue

    void enqueue(int value)
    {
        if (rear >= capacity - 1)
        {
            cout << "queue overflow";
            return;
        }
        if (front == -1)
            front = 0;
        arr[++rear] = value;
        cout << value << "enqueue to the queue \n";
    }

    // step 2 = dequeue() remove the first element element from the queue

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "queue overflow";
            return;
        }
        cout << arr[front--] << "dequeue from the queue \n";
        if (front > rear)
            front = rear - 1;
    }

    // step 3 = peek() seen the first element from the queue

    void peek()
    {
        if (front == -1 || front > rear)
        {
            cout << "queue is empty \n";
            return;
        }
        cout << "front element is " << arr[front] << "\n";
    }

    // step 4 = isempty() check the queue is empty or not

    bool isempty()
    {
        return front == -1 || front > rear;
    }

    // step 5 = isfull() check if the queue is full or not

    bool isfull()
    {
        return rear = capacity - 1;
    }

    void display()
    {
        if (isempty())
        {
            cout << "queue is empty \n";
            return;
        }
        cout << "queue element :  ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << "";
        }

        cout << endl;
    }
};

int main()
{
    Solution s;
    s.enqueue(32);
    s.enqueue(40);
    s.enqueue(60);
    s.enqueue(12);
    s.enqueue(18);
    s.enqueue(56);
    s.enqueue(87);
    s.display();

    s.peek();
    s.dequeue();
    s.display();

    if (s.isempty())
    {
        cout << "queue is empty \n";
    }
    else
    {
        cout << "queue is not empty \n";
    }

    return 0;
}