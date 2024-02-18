#include <iostream>
#include <vector>
#include <utility> // for pair
using namespace std;

void convert(int n, vector<pair<int,int>> adj[]) {
    int mat[n][n];

    // Initialize matrix with -1, except for the diagonal which should be 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = (i == j) ? 0 : -1;
        }
    }

    // Fill in the matrix with weights from the adjacency list
    for (int i = 0; i < n; i++) {
        for (auto p : adj[i]) {
            int child = p.first;
            int weight = p.second;
            mat[i][child] = weight;
        }
    }

    // Print the adjacency matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    vector<pair<int,int>> adj[n];
    while (e--) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }
    convert(n, adj);
    return 0;
}
