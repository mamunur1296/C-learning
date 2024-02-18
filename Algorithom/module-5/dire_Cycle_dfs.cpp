#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int le = 1e5 + 5;
bool vig[le];
bool pvig[le];
vector<int> arr[le];
bool ans;
void dfs(int parent)
{
    vig[parent] = true;
    pvig[parent]=true;
    cout << parent << endl;
    
    for (auto chi : arr[parent])
    {
        if(pvig[chi]) ans=true;
        if (!vig[chi])
        {
            dfs(chi);
        }
    }
    pvig[parent]=false;
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

    }
    memset(vig, false, sizeof(vig));
    memset(pvig, false, sizeof(pvig));
    ans=false;
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