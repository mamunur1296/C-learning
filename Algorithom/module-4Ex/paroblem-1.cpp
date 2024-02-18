#include <bits/stdc++.h>
#include <iostream>
#include <vector>
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
    }

    int q;
    cin >> q;


    while (q--)
    {
        int x, y;
        cin >> x >> y;
        bool flag = false;
        for (auto c : v[x])
        {
            if (c == y)
            {
                flag = true;
                break;
            }
        }
        
        if (flag || x == y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
