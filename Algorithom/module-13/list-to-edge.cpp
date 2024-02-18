#include <iostream>
#include <vector>
using namespace std;

class Edge {
public:
    int u, v, w;
    Edge(int u, int v, int w) : u(u), v(v), w(w) {}
};

int main() {
    int n, e;
    cin >> n >> e;
    vector<pair<int,int>> adj[n];
    while (e--) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }
    
    vector<Edge> edges;
    for(int i = 0; i < n; i++) {
        for(auto c : adj[i]) {
            int child = c.first;
            int cost = c.second;
            edges.push_back(Edge(i, child, cost));
        }
    }
    
    for(auto& edge : edges) {
        cout << edge.u << " " << edge.v << " " << edge.w << endl;
    }
    
    return 0;
}
