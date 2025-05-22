#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
    vector<string> groceries;

    groceries.push_back("apples");
    groceries.push_back("bananas");
    groceries.push_back("cucumbers");
    groceries.push_back("dates");
    groceries.push_back("elderberries");

    
    groceries.erase(groceries.begin() + 2);

    
    cout << "[";
    for (size_t i = 0; i < groceries.size(); ++i) {
        cout << "\"" << groceries[i] << "\"";
        if (i != groceries.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
