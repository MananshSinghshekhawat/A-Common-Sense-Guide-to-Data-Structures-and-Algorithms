// breadth first search implementation 

#include<iostream>
#include<algorithm>
#include<queue>
#include<unordered_set>
#include<vector>


using namespace std;

void bfs(const vector<vector<int>>& graph , int startNode)
{
  queue<int> q;
  unordered_set<int> show;

  // as we can mark the show as readed as enqueue(insert) into the queue
  show.insert(startNode);
  q.push(startNode);

  cout << "BFS traversal: ";

  while(!q.empty()) {

    // so here we can dequeue means remove an element from queue
    int current = q.front();
    q.pop();
    cout << current << " ";

    for(int neighbour : graph[current]) 
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

void addedge(vector<vector<int>>& graph , int u , int v)
  {
  graph[u].push_back(v);
  graph[v].push_back(u);
  }

int main()
{
  int numNode = 5;
  vector<vector<int>> graph(num);
  addedge(graph , 0 , 1);
  addedge(graph , 0 , 1);
  addedge(graph , 1 , 1);
  addedge(graph , 2 , 1);
  addedge(graph , 3 , 1);

  bfs(graph , 0);
  return 0;
}
