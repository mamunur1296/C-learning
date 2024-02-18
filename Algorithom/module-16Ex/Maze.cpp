#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int N = 1e3 + 5;
int n, m;
int di, dj;
char matrix[N][N];
bool visited[N][N];
pair<int, int> parent[N][N];
bool reached = false;
vector<pair<int, int>> direction = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && !visited[i][j]);
}
 
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    parent[si][sj] = {0, 0};
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int pi = par.first;
        int pj = par.second;
        if (pi == di && pj == dj)
        {
            reached = true;
        }
        for (int i = 0; i < 4; i++)
        {
            int ci = pi + direction[i].first;
            int cj = pj + direction[i].second;
            if (valid(ci, cj))
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
                parent[ci][cj] = {pi, pj};
            }
        }
    }
}
 
int main()
{
    memset(parent,-1,sizeof(parent));
    cin >> n >> m;
    int si, sj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (matrix[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
            if (matrix[i][j] == '#')
            {
                visited[i][j]=true;
            }
        }
    }
 
    bfs(si, sj);
 
    pair<int, int> des = {parent[di][dj].first, parent[di][dj].second};
    pair<int, int> src = {si, sj};
 
    if (reached)
    {
        while (des != src)
        {
            matrix[des.first][des.second] = 'X';
            des = parent[des.first][des.second];
        }
    }
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            
            cout << matrix[i][j];
        }
        cout << endl;
    }
 
    return 0;
}