#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> v[1005];
bool vis[1005];

void bfs(int root,int path)
{
    queue<pair<int,int>> q;
    q.push({root,0});
    vis[root] = true;

    while (!q.empty())
    {
       pair<int,int> p = q.front();
        q.pop();
        int f=p.first;
        int level=p.second;
        if(f==path) cout << level << endl;
        for (int child : v[f])
        {
            if (!vis[child])
            {
                q.push({child,level +1});
                vis[child] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    // Input edges
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));

    int root;
    cin >> root;

    bfs(root,4);
    return 0;
}
