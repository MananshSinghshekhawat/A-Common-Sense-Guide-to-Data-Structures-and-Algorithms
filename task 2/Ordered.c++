#include <iostream>
#include <vector>
using namespace std;

class OrderedInsert {
public:
    void insertOrdered(vector<int>& numbers, int newValue) {
        int index = 0;
        while (index < numbers.size() && numbers[index] < newValue) {
            index++;
        }
        numbers.insert(numbers.begin() + index, newValue);
    }

    void printVector(const vector<int>& numbers) {
        cout << "Ordered array: ";
        for (int num : numbers) {
            cout << num << " ";
        }
        cout << endl;
    }
};

int main() {
    vector<int> numbers = {3, 17, 80, 202};
    int newValue = 75000000;

    OrderedInsert oi;
    oi.insertOrdered(numbers, newValue);
    oi.printVector(numbers);

    return 0;
}
