#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        set<int> s;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            s.insert(val);
        }
        for (int c : s)
        {
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}