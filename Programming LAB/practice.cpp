#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<string> pq;

    // Insert elements into the priority queue
    pq.push("one");
    pq.push("two");
    pq.push("three");

    // Print and remove elements from the priority queue
    while(!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}