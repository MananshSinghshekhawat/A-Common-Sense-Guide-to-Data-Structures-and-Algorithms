#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// pivot and partition algorithm
int partition(vector<int> &arr, int st, int end)
{
    int Idx = st - 1, pivot = arr[end];
    for (int j = st; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            Idx++;
            swap(arr[j], arr[Idx]);
        }
    }
    swap(arr[end], arr[Idx + 1]);
    return Idx + 1;
}

void quicksort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int pivIdx = partition(arr, st, end);
        quicksort(arr, st, pivIdx - 1);  // left halff
        quicksort(arr, pivIdx + 1, end); // right half
    }
}

int main()
{
    vector<int> arr = {123, 765, 65, 78, 45, 98, 90, 67, 123, 654};
    quicksort(arr, 0, arr.size() - 1);

    for (int val : arr)
    {
        cout << val << " ";
    }

    cout << endl;
    return 0;
}