#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int len = 1e5 + 1; // this is global length for array
vector<int> v[len]; // contain our noods 
bool vig[len]; // track vigited 
int level[len]; // track level 
int path[len];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vig[src] = true;
    level[src]=0;
    while (!q.empty())
    {
        int prant = q.front();
        q.pop();
        
        for (auto chaild : v[prant])
        {
            if (!vig[chaild])
            {
                q.push(chaild);
                vig[chaild] = true;
                level[chaild]= level[prant]+1; // updates level
                path[chaild]=prant; 
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vig, false, sizeof(vig));
    memset(level, -1, sizeof(level));
    memset(path, 0, sizeof(path));
    int src;
    cin >> src;
    bfs(src);
    for (int i = 0; i < n; i++) // print level 
    {
        cout << i<< level[i] << endl;  
    }
    
    return 0;
}