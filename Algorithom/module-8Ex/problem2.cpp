#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

const long long INF = INT_MAX;
const long long MAX_NODES = 1e3+5;

vector<pair<long long, long long>> graph[MAX_NODES];
long long distances[MAX_NODES];
struct Compare {
    bool operator()(const pair<long long, long long>& a, const pair<long long, long long>& b) {
        return a.first > b.first;
    }
};
void dijkstra(int start) {
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, Compare> pq;
    pq.push({0, start});
    distances[start] = 0;

    while (!pq.empty()) {
        pair<long long, long long> current = pq.top();
        pq.pop();

        long long currentCost = current.first;
        long long currentNode = current.second;

        for (auto neighbor : graph[currentNode]) {
            long long nextNode = neighbor.first;
            long long edgeCost = neighbor.second;

            if (currentCost + edgeCost < distances[nextNode]) {
                distances[nextNode] = currentCost + edgeCost;
                pq.push({distances[nextNode], nextNode});
            }
        }
    }
}

int main() {
    int numNodes, numEdges;
    cin >> numNodes >> numEdges;

    while (numEdges--) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
    }

    int source;
    cin >> source;

    int numTestCases;
    cin >> numTestCases;


    for (int t = 0; t < numTestCases; t++) {
        long long destination, maxCost;
        cin >> destination >> maxCost;

       
        for (int i = 0; i < MAX_NODES; i++) {
            distances[i] = INF;
        }


        dijkstra(source);

        
        if (distances[destination] <= maxCost) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

