#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int le=1005;
char a[le][le];
bool vt[le][le];
int level[le][le];
int n, e;
vector<pair<int, int>> v = {{-2, 1}, {-1, 2}, {1, 2}, {2, -1}, {2, 1}, {1, -2}, {-1, -2}, {-2, -1}};
bool valid(int si, int sj)
{
    if (si < 0 || sj < 0 || si >= n || sj >= e)
    {
        return false;
    }
    else
        return true;
}
void dfs(int si, int sj)
{

    queue<pair<int, int>> q;
    q.push({si, sj});
    vt[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
       

        for (int i = 0; i < 8; i++)
        {
            int i1 = p.first + v[i].first;
            int j1 = p.second + v[i].second;
            if (valid(i1, j1) == true && vt[i1][j1] == false)
            {
                q.push({i1, j1});
                vt[i1][j1] = true;
                level[i1][j1] = level[p.first][p.second] + 1;
            }
        }
    }
}
int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        cin >> n >> e;
        int si, sj;
        cin >> si >> sj;
        int qi, qj;
        cin >> qi >> qj;
        memset(vt, false, sizeof(vt));
        memset(level, -1, sizeof(level));
        dfs(si, sj);
        cout << level[qi][qj] << endl;
    }
    return 0;
}