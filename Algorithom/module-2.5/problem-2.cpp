#include <iostream>
#include <vector>
#include <queue>
#include <algorithm> // for reverse
#include <cstring>   // for memset
using namespace std;

const int MAX_NODES = 1e5 + 1;

vector<int> arr[MAX_NODES];
bool vig[MAX_NODES];
int level[MAX_NODES];
int path[MAX_NODES];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vig[s] = true;
    level[s] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (auto chi : arr[par])
        {
            if (!vig[chi])
            {
                q.push(chi);
                vig[chi] = true;
                level[chi] = level[par] + 1;
                path[chi] = par;
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
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    memset(vig, false, sizeof(vig));
    memset(level, -1, sizeof(level));
    memset(path, -1, sizeof(path));

    int l;
    cin >> l;
    bfs(0);

    vector<int> nodesAtLevel;
    for (int i = 0; i < n; ++i)
    {
        if (level[i] == l)
        {
            nodesAtLevel.push_back(i);
        }
    }

    // Print in descending order
    reverse(nodesAtLevel.begin(), nodesAtLevel.end());
    for (auto x : nodesAtLevel)
    {
        cout << x << " ";
    }

    return 0;
}
