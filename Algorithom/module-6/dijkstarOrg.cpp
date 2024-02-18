#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

const int INF = INT_MAX;
const int MAX_NODES = 1e3 + 5;

vector<pair<int, int>> graph[MAX_NODES];
int distances[MAX_NODES];

void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});
    distances[start] = 0;

    while (!pq.empty()) {
        pair<int, int> current = pq.top();
        pq.pop();

        int currentCost = current.first;
        int currentNode = current.second;

        for (auto neighbor : graph[currentNode]) {
            int nextNode = neighbor.first;
            int edgeCost = neighbor.second;

            if (currentCost + edgeCost < distances[nextNode]) {
                distances[nextNode] = currentCost + edgeCost;
                pq.push({distances[nextNode], nextNode});
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }

    int source;
    cin >> source;

    int numTestCases;
    cin >> numTestCases;

    for (int t = 0; t < numTestCases; t++) {
        int destination;
        cin >> destination;

        for (int i = 0; i < MAX_NODES; i++) {
            distances[i] = INF;
        }

        dijkstra(source);

        if (distances[destination] == INF) {
            cout << "Not Possible" << endl;
        } else {
            cout << distances[destination] << endl;
        }
    }

    return 0;
}
