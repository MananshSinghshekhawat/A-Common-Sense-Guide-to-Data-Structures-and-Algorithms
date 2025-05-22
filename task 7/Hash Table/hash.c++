#include<iostream>
#include<list>
#include<string>
#include<string>
#include<algorithm>

using namespace std;

class HashTable {
private:
    int size;
    list<pair<string, string>>* table;
public:
HashTable(int size) {
    this->size = size;
    table = new list<pair<string, string>>[size];
}
};

// not completed yet