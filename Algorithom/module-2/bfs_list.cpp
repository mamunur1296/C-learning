#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> v[1005]; // global vector 
bool vis[1005];      // global vigitor array 

void bfs(int root)
{
    queue<int> q;   // pust first node and then 2nd node 
    q.push(root);
    vis[root] = true; // before push then visiting mack true

    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        cout << f << endl;
        for (int child : v[f])  // chaild travers 
        {
            if (!vis[child])
            {
                q.push(child);
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

    memset(vis, false, sizeof(vis));  // mack all filed false

    int root;  // input root or sorch 
    cin >> root;

    bfs(root); // finally bfs call 

    return 0;
}
