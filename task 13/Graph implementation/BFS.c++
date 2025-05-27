// breadth first search implementation 

#include<iostream>
#include<algorithm>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include<string>


using namespace std;

void bfs(const unordered_map<string> , vector<string>& graph , const string& startNode)
{
  queue<string> q;
  unordered_set<string> show;

  // as we can mark the show as readed as enqueue(insert) into the queue
  show.insert(startNode);
  q.push(startNode);

  cout << "BFS traversal: " << startNode << " ";

  while(!q.empty()) {

    // so here we can dequeue means remove an element from queue
    int current = q.front();
    q.pop();
    cout << current << " ";
if(graph.find(current) != graph.end())
{
  for(const string& neighbour: graph.at(current))
    {
      if(show.find(neighbour) == show.end())
      {
        show.insert(neighbour);
        q.push(neighbour);
      }
    }
}

cout << endl;
  }


/*void addedge(vector<vector<int>>& graph , int u , int v)
  {
  graph[u].push_back(v);
  graph[v].push_back(u);
  }
*/

int main()
{
  /*int numNode = 5;
  vector<vector<int>> graph(num);
  addedge(graph , 0 , 1);
  addedge(graph , 0 , 1);
  addedge(graph , 1 , 1);
  addedge(graph , 2 , 1);
  addedge(graph , 3 , 1);

  bfs(graph , 0); */
  vector<pair<string , string>> relationships = {
  {"Alice" , "Bob"},
  {"Bob" , "Cynthia"},
  {"Alice" , "Diana"},
  {"Bob" , "Diano"},
  {"Elise" , "Fred"},
  {"Diana" , "Fred"},
  {"Fred" , "Alice"},
  };

  unordered_map<string , vector<string>> graph;
  for(const auto& rel : relationships)
    {
      graph[rel.first].push_back(rel.second);
      graph[rel.second].push_back(rel.first);
    }
  bfs(graph , "Alice");
  bfs(graph  , "Elise");
  bfs(graph , "Fred");
  bfs(graph , "Diana");
  
  return 0;
}
