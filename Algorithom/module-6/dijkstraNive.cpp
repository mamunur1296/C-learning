#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int n = 100;
vector<pair<int, int>> arr[n];
int dis[n];

void dijkstra(int s) {
    queue<pair<int, int>> q;
    q.push({s, 0});
    dis[s] = 0;

    while (!q.empty()) {
        pair<int, int> par = q.front();
        q.pop();
        int pNode = par.first;
        int pCost = par.second;

        for (pair<int, int> child : arr[pNode]) {
            int cNode = child.first;
            int cCost = child.second;

            if (pCost + cCost < dis[cNode]) {
                dis[cNode] = pCost + cCost;
                q.push({cNode, dis[cNode]});
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
        arr[a].push_back({b, c});
        arr[b].push_back({a, c});
    }

    for (int i = 0; i < n; i++) {
        dis[i] = INT_MAX;
    }

    dijkstra(0);

    for (int i = 0; i < n; i++) {
        cout << i << "->" << dis[i] << endl;
    }

    return 0;
}
