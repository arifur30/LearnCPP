#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

vector<int> adj[N]; // adjacency list
bool vis[N]; // visited array
bool dfs(int vertex, int par)
{
    // first section
    // take action on vertex after entering it
    bool isLoopExists = false;
    vis[vertex] = true;
    
    for ( int child : adj[vertex])
    {
        // second section
        // take action on edge/child after entering it
      
        if(vis[child] && child == par) continue;
        if(vis[child])
        {
            // back edge
            return true;
        }
        isLoopExists |=  dfs(child, vertex); // or gate
        // third section
        // take action on edge/child after leaving it

        
    }
    return isLoopExists;
    // fourth section
    // take action on vertex after leaving it
}

int main(int argc, char const *argv[])
{
    int nodes , edges;
    cin >> nodes >> edges;

    for ( int i = 0; i < edges; i++)
    {
        int u , v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool isLoopExists = false;
    for( int i = 1; i <= nodes; i++)
    {
        if(vis[i]) continue;

        if (dfs(i, 0))       // for starting vertex parent is 0
        {
            isLoopExists = true;
            break;
        }     
    }
  
    if(isLoopExists)
    {
        cout << "Cycle exists" << endl;
    }
    else
    {
        cout << "Cycle does not exists" << endl;
    }
    

    
    return 0;
}

/*
Input:
8 6
1 2
2 3
3 4
4 1
5 6
7 8


Output:
Cycle exists

GRAPH:
         1
        / \
        4   2
         \ /
          3
    
    5-6  7-8
*/
