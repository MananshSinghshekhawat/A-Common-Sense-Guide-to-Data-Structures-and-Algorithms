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

    fruits.push_back("figs");

    for (int i = 0; i < fruits.size(); i++) {
        cout << fruits[i] << " ";
    }

    return 0;
}
