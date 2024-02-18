#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> v[n+1];

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q;
    cin >> q;

    
    while (q--)
    {
       
        int n;
        cin >> n;
        sort(v[n].rbegin(), v[n].rend());
        if(v[n].empty()){
            cout << -1 ;
        }
        else{
        for (auto c : v[n])
        {
            cout << c << " ";
        }
        }
        cout  << endl;
    }

    return 0;
}