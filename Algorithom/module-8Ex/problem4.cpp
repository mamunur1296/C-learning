#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const long long INF = LLONG_MAX;

struct Edge {
    int to;
    long long cost;
};

vector<vector<Edge>> graph;

struct Compare {
    bool operator()(const pair<long long, int>& a, const pair<long long, int>& b) {
        return a.first > b.first;
    }
};

vector<long long> dijkstra(int start, int n) {
    vector<long long> distance(n + 1, INF);
    distance[start] = 0;

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, Compare> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        long long dist_u = pq.top().first;
        pq.pop();

        if (dist_u > distance[u]) {
            continue;
        }

        for (const Edge& edge : graph[u]) {
            int v = edge.to;
            long long cost = edge.cost;

            if (distance[u] + cost < distance[v]) {
                distance[v] = distance[u] + cost;
                pq.push({distance[v], v});
            }
        }
    }

    return distance;
}

int main() {
    int n, m;
    cin >> n >> m;

    graph.resize(n + 1);

    for (int i = 0; i < m; ++i) {
        int u, v;
        long long cost;
        cin >> u >> v >> cost;
        graph[u].push_back({v, cost});
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int source, destination;
        cin >> source >> destination;

        vector<long long> distances = dijkstra(source, n);

        if (distances[destination] == INF) {
            cout << "No Connection" << endl;
        } else {
            cout << distances[destination] << endl;
        }
    }

    return 0;
}
