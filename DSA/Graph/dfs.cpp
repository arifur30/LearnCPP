#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

vector<int> adj[N]; // adjacency list
bool vis[N]; // visited array
void dfs(int vertex)
{
    // first section
    // take action on vertex after entering it
    vis[vertex] = true;
    cout << vertex << endl;
    for ( int child : adj[vertex])
    {
        // second section
        // take action on edge/child after entering it
        cout << "parent " << vertex << " child " << child << endl;
        if(vis[child]) continue;

        dfs(child);
        // third section
        // take action on edge/child after leaving it
    }

    // fourth section
    // take action on vertex after leaving it
}

int main(int argc, char const *argv[])
{
    int n , m;
    cin>>n>>m;
// vertex 1 to n and m edges
    for ( int i = 0; i < m; i++)
    {
        int u , v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int startVertex;
    cin >> startVertex;
    dfs(startVertex);
    return 0;
}
