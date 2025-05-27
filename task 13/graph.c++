// this program will show the graphy data structure 

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <list>

using namespace std;


class Graph {
private:
    // Adjacency list to store the graph (using map to store each person's connections)
    map<string, list<string>> adjList;

public:
    // Add an edge 
    void addEdge(const string& person1, const string& person2) {
        adjList[person1].push_back(person2); // person1 is connected to person2
        adjList[person2].push_back(person1); // person2 is connected to person1 (undirected graph)
    }

    
    void displayGraph() {
        for (auto& pair : adjList) {
            cout << pair.first << ": ";
            for (const auto& friendName : pair.second) {
                cout << friendName << " ";
            }
            cout << endl;
        }
    }

    // Check 
    bool isPersonInGraph(const string& person) {
        return adjList.find(person) != adjList.end();
    }

    
    list<string> getFriends(const string& person) {
        if (isPersonInGraph(person)) {
            return adjList[person];
        } else {
            return {}; // Empty list if no one the person is found on the list
        }
    }
};


int main() {
    
    Graph socialGraph;

    
    socialGraph.addEdge("Alice", "Bob");
    socialGraph.addEdge("Bob", "Cynthia");
    socialGraph.addEdge("Alice", "Diana");
    socialGraph.addEdge("Bob", "Diana");
    socialGraph.addEdge("Elise", "Fred");
    socialGraph.addEdge("Diana", "Fred");
    socialGraph.addEdge("Fred", "Alice");

    
    cout << "Graph Representation (Adjacency List):" << endl;
    socialGraph.displayGraph();

   
    string person = "Alice";
    cout << "\nFriends of " << person << ": ";
    list<string> friends = socialGraph.getFriends(person);
    for (const string& friendName : friends) {
        cout << friendName << " ";
    }
    cout << endl;

    return 0;
}

