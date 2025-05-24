#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool Twosum(vector<int> &arr, int key)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == key)
        {
            return true;
        }
        else if (sum < key)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return false;
}

int main()
{
    vector<int> arr = {-3, -2, -1, 0, 1, 2, 3};
    int key = 0;
    if (Twosum(arr, key))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}