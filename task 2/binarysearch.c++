#include <iostream>
using namespace std;

class BinarySearch {
public:
    int binarySearch(int array[], int size, int value) {
        int low = 0;
        int high = size - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            int guess = array[mid];

            if (guess == value) {
                return mid;
            } else if (guess < value) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return -1; // not found
    }
};

int main() {
    int numbers[] = {312, 1734, 22, 75, 80, 202};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    BinarySearch bs;
    int result = bs.binarySearch(numbers, size, 202);

    if (result != -1) {
        cout << "Value found at index: " << result << endl;
    } else {
        cout << "Value not found" << endl;
    }

    return 0;
}
