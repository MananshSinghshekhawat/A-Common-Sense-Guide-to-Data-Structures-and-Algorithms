#include <iostream>
using namespace std;

int main() {
    int numbers[] = {4675, 2123, 7123, 1987, 300};
    int n = sizeof(numbers) / sizeof(numbers[0]);

   
    for (int i = 0; i < n; i++) {
        int minIndex = i; 
        
        for (int j = i + 1; j < n; j++) {
            if (numbers[j] < numbers[minIndex]) {
                minIndex = j;
            }
        }

        
        int temp = numbers[i];
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = temp;
    }

    
    cout << "Sorted list: ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
