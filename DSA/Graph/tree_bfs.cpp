#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

vector<int> adj[N]; // adjacency list
bool vis[N]; // visited array
int level[N]; // level of each node

void bfs(int source)
{

    queue<int> q;
    q.push(source);
    vis[source] = true;

    while (!q.empty())
    {
        int current_vertex = q.front();
        q.pop();
        cout << current_vertex << " ";
        for(int child: adj[current_vertex])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[current_vertex] + 1;
            }
        }
    }
    cout << endl;
    // take action on vertex after leaving it
}

int main()
{
    int n;
    cin>>n;

    for ( int i = 0; i < n; i++)
    {
        int u , v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    int startVertex;
    cin >> startVertex;
    bfs(startVertex);

    for(int i = 1; i <=n ; i++)
    {
        cout  << i << " : " << level[i] << endl;
    }
    return 0;
}


