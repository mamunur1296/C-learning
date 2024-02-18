#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAX_ROWS = 1e4+4;
const int MAX_COLS = 1e4+4;
char grid[MAX_ROWS][MAX_COLS];
bool visited[MAX_ROWS][MAX_COLS];
int minArea = INT_MAX;
int rows, cols;

void dfs(int row, int col, int& area) {
    if (row < 0 || row >= rows || col < 0 || col >= cols || grid[row][col] == '-' || visited[row][col]) {
        return;
    }
    visited[row][col] = true;
    area++; 
    dfs(row + 1, col, area);
    dfs(row - 1, col, area);
    dfs(row, col + 1, area);
    dfs(row, col - 1, area);
}

int main() {
    cin >> rows >> cols;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> grid[i][j];
        }
    }

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == '.' && !visited[i][j]) {
                int area = 0; 
                dfs(i, j, area);
                minArea = min(minArea, area); 
            }
        }
    }


    if (minArea == INT_MAX) {
        cout << "-1" << endl; 
    } else {
        cout << minArea << endl;
    }

    return 0;
}
