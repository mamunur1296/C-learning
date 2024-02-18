#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int le = 1e5 + 5;
vector<pair<int, int>> adj[le]; 
bool visited[le];
long long int mCost = 0;

class cmp {
public:
    bool operator() (const pair<int, int>& a, const pair<int, int>& b) {
        return a.first > b.first; 
    }
};

void minCost(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({0, start}); 
    
    while (!pq.empty()) {
        int u = pq.top().second;
        int cost = pq.top().first;
        pq.pop();

        if (visited[u]) continue;
        visited[u] = true;
        mCost += cost;

        for (auto edge : adj[u]) {
            int v = edge.second;
            int edgeCost = edge.first;
            if (!visited[v]) {
                pq.push({edgeCost, v});
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        adj[i].clear();
    mCost = 0;
    for (int i = 0; i < m; ++i) {
        int u, v, cost;
        cin >> u >> v >> cost;
        adj[u].push_back({cost, v});
        adj[v].push_back({cost, u});
    }
    memset(visited, false, sizeof(visited));
    minCost(1); 
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            cout << "-1" << endl; 
            return 0;
        }
    }
    cout << mCost << endl;
    return 0;
}