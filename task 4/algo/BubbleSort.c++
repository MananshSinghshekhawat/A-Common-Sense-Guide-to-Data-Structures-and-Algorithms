#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    int arr[] = {100 , 600 , 232 , 543 , 879, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    int step = 1;

    cout << "Original array: ";
    printArray(arr, n);

    for (int i = 0; i < n; i++) {
        bool swapped = false;
        cout << "\nPassthrough #" << (i + 1) << ":" << endl;

        for (int j = 0; j < n - 1 - i; j++) {
            cout << "Step #" << step++ << ": Compare " << arr[j] << " and " << arr[j + 1] << endl;
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
                cout << "Swap -> ";
            } else {
                cout << "No swap -> ";
            }
            printArray(arr, n);
        }

        if (!swapped) break;
    }

    cout << "\nSorted array: ";
    printArray(arr, n);

    return 0;
}
