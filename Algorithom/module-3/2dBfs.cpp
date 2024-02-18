#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int m, n;
int vis[20][20];
bool dis[20][20];
char c[20][20];
vector<int> v[100];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool isValis(int i, int j)
{
    if ((i < 0 || i >= m || j < 0 || j >= n))
        return false;
    return true;
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj]=0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int a=par.first,b=par.second;
        
        for (int i = 0; i < 4; i++)
        {
            int c1 = a + d[i].first;
            int c2 = b + d[i].second;
            if (isValis(c1, c2) && !dis[c1][c2])
            {
                q.push({c1,c2});
                vis[c1][c2]=true;
                dis[c1][c2]=dis[a][b]+1;
            }
        }
    }
}
int main()
{
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(si, sj);
    cout << dis[2][3];
    
    return 0;
}