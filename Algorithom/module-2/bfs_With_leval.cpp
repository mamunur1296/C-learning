#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> v[1005];
bool vis[1005];
int level[1005];
void bfs(int root)
{
    queue<int> q;
    q.push(root);
    vis[root] = true;
    level[root]=0;
    while (!q.empty())
    {
        int f = q.front();
        q.pop();
 
        for (int child : v[f])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] =level[f]+1;
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
    memset(level, false, sizeof(level));

    int root;
    cin >> root;

    bfs(root);
    for (int i = 0; i < n; i++)
    {
        cout << i << level[i] << endl;
        
    }
    
    return 0;
}
