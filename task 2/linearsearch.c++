#include <iostream>
using namespace std;

class LinearSearch {
public:
    int linearSearch(int array[], int size, int value) {
        for (int i = 0; i < size; i++) {
            if (array[i] == value) {
                return value;
            } else if (array[i] > value) {
                break;
            }
        }
        return -1; // Not found
    }
};

int main() {
    int numbers[] = {3, 17, 75, 80, 202};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    LinearSearch ls;
    int result = ls.linearSearch(numbers, size, 221222);

    if (result == -1) {
        cout << "Value not found" << endl;
    } else {
        cout << "Value Found: " << result << endl;
    }

    return 0;
}
