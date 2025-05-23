#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
private:
    int top;
    int arr[100]; // size declaration of an max stack

public:
    Solution()
    {
        top = -1;
    }

    // step 1 = push() an element at the last from the stack

    void push(int value)
    {
        if (top >= 99)
        {
            cout << "stack overflow";
        }
        else
        {
            arr[++top] = value;
            cout << value << "pushed to the stack" << "\n";
        }
    }

    // step 2 = pop() an element at the top  of an stack

    void pop()
    {
        if (top < 0)
        {
            cout << "stack underflow";
        }
        else
        {
            cout << arr[top] << "pop from an stack" << "\n";
            top--;
        }
    }

    // step 3 = peak() an element to the first position of the stack

    void peek()
    {
        if (top < 0)
        {
            cout << "stack is empty";
        }
        else
        {
            cout << "top element is :" << arr[top] << "\n";
        }
    }

    // step 4 = isempty() checking the stack is empty or not

    bool isempty()
    {
        return top == -1;
    }

    // showing all the elemnts on the stack

    void display()
    {
        if (top < 0)
        {
            cout << "stack is empty\n";
        }
        return;

        cout << "stack elements:";
        for (int i = 0; i < top; i++)
        {
            cout << arr[i] << "";
        }

        cout << "\n";
    }
};

int main()
{
    Solution s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.display();

    s.peek();
    s.pop();
    s.display();

    if (s.isempty())
    {
        cout << "Stack is empty\n";
    }
    else
    {
        cout << "Stack is not empty\n";
    }

    return 0;
}