#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
unordered_map <char, bool> vis;

map <char, vector <char> > adj;



void BFS(char source)
{
    queue<int>q;
    q.push(source);
    vis[source] = true;

    while(!q.empty())
    {
        char cur_vertex = q.front();
        q.pop();
        cout << cur_vertex << " ";

        for(char child: adj[cur_vertex])
        {
            if(!vis[child])
            {
                vis[child] = true;
                q.push(child);

               // level[child] = level[cur_vertex] + 1;
            }

        }
    }
}



int main()
{
    int n;
    cin >> n;

    for(int i = 0;i < n; i++)
    {

        char u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    cout << "start node: ";
    char ch;
    cin >> ch;
    BFS(ch);


}
