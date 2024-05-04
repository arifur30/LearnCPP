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


// DFS using a stack
void dfs(char startNode) {
    stack<char> stack;
    set<char> visited;

    stack.push(startNode);

    while (!stack.empty()) {
        char currentNode = stack.top();
        stack.pop();

        if (visited.find(currentNode) == visited.end()) {
            cout << currentNode << " ";
            visited.insert(currentNode);

            for (int i = graph[currentNode].size() - 1; i >= 0; --i) {
                char neighbor = graph[currentNode][i];
                if (visited.find(neighbor) == visited.end()) {
                    stack.push(neighbor);
                }
            }
        }
    }

    cout << endl;
}


int main() {
    initializeGraph();
    cout << "DFS starting from node 'd': ";
    dfs('d');
    return 0;
}