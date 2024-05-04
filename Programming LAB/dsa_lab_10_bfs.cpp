#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

using namespace std;

// Graph representation using an adjacency list
map<char, vector<char>> graph;


void initializeGraph() {

    graph['a'] = {'b', 'c'};
    graph['b'] = {'a', 'c','d', 'e'};
    graph['c'] = {'a', 'b', 'd'};
    graph['d'] = {'b', 'c', 'e', 'j'};
    graph['e'] = {'b', 'd', 'f', 'h'};
    graph['f'] = {'e', 'h', 'h'};
    graph['g'] = {'f', 'h'};
    graph['h'] = {'e', 'f', 'g', 'j', 'k'};
    graph['j'] = {'d', 'h', 'k'};
    graph['k'] = {'h', 'j'};
}

// BFS using a queue
void bfs(char startNode) {
    queue<char> queue;
    set<char> visited;

    queue.push(startNode);
    visited.insert(startNode);

    while (!queue.empty()) {
        char currentNode = queue.front();
        queue.pop();
        cout << currentNode << " ";

        for (char neighbor : graph[currentNode]) {
            if (visited.find(neighbor) == visited.end()) {
                visited.insert(neighbor);
                queue.push(neighbor);
            }
        }
    }

    cout << endl;
}


int main() {
    initializeGraph();
    cout << "BFS starting from node 'd': ";
    bfs('d');
    return 0;
}