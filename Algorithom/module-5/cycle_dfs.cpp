#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int le = 1e5 + 5;
bool vig[le];
vector<int> arr[le];
int parr[le];
bool ans;
void dfs(int parent)
{
    vig[parent] = true;
    for (auto chi : arr[parent])
    {
        // Cycle functions
        if (vig[chi] && parr[parent] != chi)
        {
            ans = true;
        }
        if (!vig[chi])
        {
            parr[chi] = parent;
            dfs(chi);
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
    memset(parr, -1, sizeof(parr));
    ans = false;
    for (int i = 0; i < n; i++)
    {
        if (!vig[i])
        {
            dfs(i);
        }
    }
    if (ans)
        cout << "OK" << endl;
    else
        cout << "NO" << endl;
    return 0;
}