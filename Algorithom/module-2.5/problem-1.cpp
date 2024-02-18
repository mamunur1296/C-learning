#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int le = 1e5 + 1;
vector<int> iv[le];
bool vig[le];
int level[le];
int path[le];
void bfs(int s, int d)
{
    queue<int> q;
    q.push(s);
    vig[s] = true;
    level[s] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (auto ch : iv[parent])
        {
            if (!vig[ch])
            {
                q.push(ch);
                vig[ch] = true;
                level[ch] = level[parent] + 1;
                path[ch] = parent;
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
        iv[a].push_back(b);
        iv[b].push_back(a);
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        memset(vig, false, sizeof(vig));
        memset(level, -1, sizeof(level));
        memset(path, -1, sizeof(path));
        int s, d;
        cin >> s >> d;

        bfs(s, d);
        if (level[d] == -1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << level[d] << endl;
        }
    }

    return 0;
}