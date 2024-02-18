#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> v[1005]; // this is input my Nodes 
bool vis[1005]; // this is track my Nodes are vigited or not
int level[1005]; // this is track level
int par[1005];
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
                par[child]=f;
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
    memset(level, -1, sizeof(level));
    memset(par, -1, sizeof(par));

    int root,des;
    cin >> root>>des;

    bfs(root);
    // path print 
    int x=des; // mack des
    vector<int> path;
    while(x != -1){
        path.push_back(x);
        x=par[x];
    }
    reverse(path.begin(),path.end()); 
    for(auto x:path)cout << x << endl;
    return 0;
}
