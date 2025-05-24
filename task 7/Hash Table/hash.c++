#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>

using namespace std;
class DuplicateChecker {
public:
    bool hasDuplicateValue(const vector<string>& array) {
        unordered_set<string> existingValues;

        for (const string& item : array) {
            if (existingValues.find(item) != existingValues.end()) {
                return true;
            } else {
                existingValues.insert(item);
            }
        }

        return false;
    }
};

int main() {
    vector<string> numbers = {"apple", "banana", "grape", "apple"};

    DuplicateChecker checker;
    bool result = checker.hasDuplicateValue(numbers);

    cout << "Has duplicates? " << (result ? "Yes" : "No") << endl;

    return 0;
}
