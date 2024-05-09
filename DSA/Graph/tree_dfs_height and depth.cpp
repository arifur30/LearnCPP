#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
// depth and height
int depth[N], height[N];


vector<int> adj[N]; // adjacency list

void dfs(int vertex, int par=0)
{
    // first section
    // take action on vertex after entering it
    for ( int child : adj[vertex])
    {
        // second section
        // take action on edge/child after entering it
        
        if(child == par) continue;
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
        height[vertex] = max(height[vertex], height[child] + 1);
        // third section
        // take action on edge/child after leaving it
    }

    // fourth section

    // take action on vertex after leaving it
}

int main()
{
    int n;
    cin>>n;
// vertex 1 to n and m edges
    for ( int i = 0; i < n-1; i++)
    {
        int u , v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int startVertex;
    cin >> startVertex;
    dfs(startVertex);

    for(int i = 1; i <=n ; i++)
    {
        cout  << depth[i] << " " << height[i] << endl;
    }
    return 0;
}


