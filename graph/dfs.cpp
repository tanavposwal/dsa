#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls)
{
  vis[node] = 1;
  ls.push_back(node);

  for (auto it : adj[node])
  {
    if (!vis[it])
    {
      dfs(it, adj, vis, ls);
    }
  }
}
vector<int> dfsOfGraph(int V, vector<int> adj[])
{
  int vis[V] = {0};
  int start = 0;
  vector<int> ls;
  dfs(start, adj, vis, ls);
  return ls;
}

int main()
{
  int V = 7;
  vector<int> adj[] = {{3, 2}, {2, 4, 3}, {0, 1, 3}, {0, 2, 4}, {1, 3, 5}, {4, 6}, {5}};

  vector<int> res = dfsOfGraph(V, adj);

  for (int i : res)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
