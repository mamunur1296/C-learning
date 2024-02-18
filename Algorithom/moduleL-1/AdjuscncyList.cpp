#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> v[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        for (auto chi : v[i])
        {
            cout << chi << " ";
        }
        cout  << endl;
        
    }

    return 0;
}
