#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>> v[n];
    while (e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
    }
    for (int i = 0; i < n; i++)
    {
        for(auto c:v[i]){
            cout << i << c.first << c.second << " ";
        }
        cout  << endl;
        
    }
    return 0;
}