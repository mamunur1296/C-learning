#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    // for(int v:b)c.push_back(v);
    // for(int v:a)c.push_back(v);
    // c.insert(c.end(), b.begin(), b.end());
    c=b;
    c.insert(c.end(), a.begin(), a.end());
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}