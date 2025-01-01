#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph
{
public:
  unordered_map<int, list<int>> adj;

  void addEdge(int a, int b, bool direction)
  {
    // direction 0-undirected
    // direction 1-directed

    adj[a].push_back(b);
    if (!direction)
    {
      adj[b].push_back(b);
    }
  }

  void printAdjList()
  {
    for (auto i : adj)
    {
      cout << i.first << "->";
      for (auto j : i.second)
      {
        cout << j << ", ";
      }
      cout << endl;
    }
  }
};

int main()
{
  int n, m;

  cout << "enter no of nodes" << endl;
  cin >> n;

  cout << "enter no of edges" << endl;
  cin >> m;

  Graph g;

  for (int i = 0; i < m; i++)
  {
    int u, v;
    cin >> u >> v;
    // undirectional
    g.addEdge(u, v, 0);
  }

  g.printAdjList();

  return 0;
}
