#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

const int nn = 1005;
int m, n;
int c[nn][nn];
bool isTravers[nn][nn];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool isValid(int i, int j) {
    if (i < 0 || i >= m || j < 0 || j >= n) return false;
    return true;
}

void dfs2d(int si, int sj) {
    isTravers[si][sj] = true;
    for (int i = 0; i < 4; i++) {
        int c1 = si + d[i].first;
        int c2 = sj + d[i].second;
        if (isValid(c1, c2) && !isTravers[c1][c2] && c[c1][c2] != -1) {
            dfs2d(c1, c2);
        }
    }
}

int count() {
    int count = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!isTravers[i][j] && c[i][j] != -1) {
                count++;
                dfs2d(i, j);
            }
        }
    }
    return count;
}

int main() {
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++) {
            if (s[j] == '#') {
                c[i][j] = -1; 
            } else {
                c[i][j] = 1; 
            }
            isTravers[i][j] = false; 
        }
    }

    int apart = count();
    cout << apart << endl;

    return 0;
}
