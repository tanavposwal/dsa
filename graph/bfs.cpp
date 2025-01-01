#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
  int vis[V] = {0};
  vis[0] = 1;
  queue<int> q;
  // push the initial starting node
  q.push(0);
  vector<int> bfs;
  // iterate till the queue is empty
  while (!q.empty())
  {
    // get the topmost element in the queue
    int node = q.front();
    q.pop();
    bfs.push_back(node);
    // traverse for all its neighbours
    for (auto it : adj[node])
    {
      // if the neighbour has previously not been visited,
      // store in Q and mark as visited
      if (!vis[it])
      {
        vis[it] = 1;
        q.push(it);
      }
    }
  }
  return bfs;
}

int main()
{

  int V = 7;
  vector<int> adj[] = {{3, 2}, {2, 4, 3}, {0, 1, 3}, {0, 2, 4}, {1, 3, 5}, {4, 6}, {5}};
  ;

  vector<int> res = bfsOfGraph(V, adj);

  for (int i : res)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}