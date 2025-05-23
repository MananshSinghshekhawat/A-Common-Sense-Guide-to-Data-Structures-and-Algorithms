// second examples fibonacci series

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}

int main()
{
    int n = 500;
    cout << "fibonacci series of 500 is : ";
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }

    return 0;
}