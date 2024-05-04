#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

vector<int> adj[N], current_cc; // adjacency list
vector<vector<int>> connected_components; // connected components
bool vis[N]; // visited array
void dfs(int vertex)
{
    // first section
    // take action on vertex after entering it
    vis[vertex] = true;
    current_cc.push_back(vertex);
   // cout << vertex << endl;
    for ( int child : adj[vertex])
    {
        // second section
        // take action on edge/child after entering it
      
       // cout << "parent " << vertex << " child " << child << endl;
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
    int nodes , edges;
    cin >> nodes >> edges;

    for ( int i = 0; i < edges; i++)
    {
        int u , v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cnt_components = 0;
    for( int i = 1; i <= nodes; i++)
    {
        if(vis[i]) continue;
        current_cc.clear();
        cnt_components++;
        dfs(i);
        connected_components.push_back(current_cc);
    }
  //  cout << "Number of connected components are " << cnt_components << endl;
        cout << "Number of connected components are " << connected_components.size() << endl;

        for(auto it : connected_components)
        {
            for(auto i : it)
            {
                cout << i << " ";
            }
            cout << endl;
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
Number of connected components are 3

GRAPH:
         1
        / \
        4   2
         \ /
          3
    
    5-6  7-8
*/
