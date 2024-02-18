#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>

using namespace std;

const int nn = 1e3+5;
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

int main() {
    cin >> m >> n;
    pair<int, int> src, des;

    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++) {
            if (s[j] == '.') {
                c[i][j] = 1; 
            } else {
                c[i][j] = -1; 
            }
            isTravers[i][j] = false;
        }
    }

    int startRow, startCol, endRow, endCol;
    cin >> startRow >> startCol >> endRow >> endCol;

    src = {startRow, startCol};
    des = {endRow, endCol};

    dfs2d(src.first, src.second);

    if (isTravers[des.first][des.second]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
