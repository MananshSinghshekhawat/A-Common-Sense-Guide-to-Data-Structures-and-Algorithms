// this code is an example of dijkstrals algorithm

#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>
#include <climits>

using namespace std;

const int INF = INT_MAX;  // Infinity


void dijkstra(const string &start, const unordered_map<string, vector<string>> &graph, unordered_map<string, int> &dist) {
    dist[start] = 0;

   
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int d = pq.top().first;
        string u = pq.top().second;
        pq.pop();

        if (d > dist[u]) continue;  

        for (const string &v : graph.at(u)) {
            if (dist[u] + 1 < dist[v]) {  
                dist[v] = dist[u] + 1;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    
    unordered_map<string, vector<string>> graph;

   
    graph["Alice"].push_back("Bob");
    graph["Bob"].push_back("Alice");
    graph["Bob"].push_back("Cynthia");
    graph["Cynthia"].push_back("Bob");
    graph["Alice"].push_back("Diana");
    graph["Diana"].push_back("Alice");
    graph["Bob"].push_back("Diano");
    graph["Diano"].push_back("Bob");
    graph["Elise"].push_back("Fred");
    graph["Fred"].push_back("Elise");
    graph["Diana"].push_back("Fred");
    graph["Fred"].push_back("Diana");
    graph["Fred"].push_back("Alice");
    graph["Alice"].push_back("Fred");

   
    unordered_map<string, int> dist;

 
    for (const auto &entry : graph) {
        dist[entry.first] = INF;
    }

    
    string source = "Alice";
    dijkstra(source, graph, dist);

 
    cout << "Shortest distances from " << source << ":\n";
    for (const auto &entry : dist) {
        cout << "To " << entry.first << ": " << entry.second << " step(s)\n";
    }

    return 0;
}
