#include<bits/stdc++.h>
using namespace std;

// dijktras algorithm
vector<int> dijkstra(vector<vector<pair<int, int>>>& graph, int start) {
    int n = graph.size();
    vector<int> distances(n, INT_MAX);
    distances[start] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        int dist_u = pq.top().first;
        pq.pop();

        // If the current distance is greater than the stored distance, ignore it
        if (distances[u] < dist_u) continue;

        for (auto& neighbor : graph[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;
            int total_dist = dist_u + weight;

            if (total_dist < distances[v]) {
                distances[v] = total_dist;
                pq.push({total_dist, v});
            }
        }
    }

    return distances;
}

int main() {
    
    // Example graph represented as an adjacency list
    vector<vector<pair<int, int>>> graph = {
        {{1, 4}, {7, 8}},
        {{0, 4}, {2, 8}, {7, 11}},
        {{1, 8}, {8, 2}, {5, 4}, {3, 7}},
        {{2, 7}, {4, 9}, {5, 14}},
        {{3, 9}, {5, 10}},
        {{2, 4}, {3, 14}, {4, 10}, {6, 2}},
        {{5, 2}, {7, 1}, {8, 6}},
        {{0, 8}, {1, 11}, {6, 1}, {8, 7}},
        {{2, 2}, {6, 6}, {7, 7}}
    };

    int start_node = 0;
    vector<int> shortest_distances = dijkstra(graph, start_node);

    cout << "Shortest distances from node " << start_node << ": ";
    for (int i = 0; i < shortest_distances.size(); ++i) {
        cout << shortest_distances[i] << " ";
    }
    cout << endl;

    return 0;
}

// Time complexity: O(V+E) where V is the number of vertices and E is the number of edges in the graph.


/*

input:
8 14
0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 8 2
2 5 4
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6
7 8 7

output:



*/