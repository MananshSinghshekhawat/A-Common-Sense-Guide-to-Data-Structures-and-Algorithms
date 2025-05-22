#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> fruits;

    fruits.push_back("apples");
    fruits.push_back("bananas");
    fruits.push_back("cherries");
    fruits.push_back("dates");
    fruits.push_back("elderberries");

    string searchItem = "apples";

    for (int i = 0; i < fruits.size(); i++) {
        if (fruits[i] == searchItem) {
            cout << "Found at index " << i << endl;
            break;
        }
    }

    return 0;
}
