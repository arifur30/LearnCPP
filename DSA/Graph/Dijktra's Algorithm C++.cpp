#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

vector<pair<int, int>> adj[N]; // Adjacency list

void dijktra(int source)
{
    vector<int > distance(N, INT_MAX);
    vector < bool > vis(N, false);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; 
}


int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m; // n = number of nodes, m = number of edges
    
    for(int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt}); // for undirected graph
    }
    return 0;
}
