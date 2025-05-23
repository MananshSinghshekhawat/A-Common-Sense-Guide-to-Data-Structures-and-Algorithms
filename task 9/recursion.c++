// factoral of a number

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    int number;
    cout << "Enter the number :";
    cin >> number;
    cout << "The factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}
