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

int dfs2d(int si, int sj) {
    int roomCount = 0;
    isTravers[si][sj] = true;
    for (int i = 0; i < 4; i++) {
        int c1 = si + d[i].first;
        int c2 = sj + d[i].second;
        if (isValid(c1, c2) && !isTravers[c1][c2] && c[c1][c2] != -1) {
            roomCount += dfs2d(c1, c2);
        }
    }
    return roomCount + 1; 
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

    vector<int> apartmentSizes;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!isTravers[i][j] && c[i][j] != -1) {
                int size = dfs2d(i, j);
                apartmentSizes.push_back(size);
            }
        }
    }

    sort(apartmentSizes.begin(), apartmentSizes.end());

    for (int size : apartmentSizes) {
        cout << size << " ";
    }
    
    if (apartmentSizes.empty()) {
        cout << "0"; 
    }

    cout << endl;

    return 0;
}
