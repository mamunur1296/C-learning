#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin>>n;
    while(n--)
    {
        int v;
        cin>>v;
        s.insert(v);
    }
    cout << s.count(20222) << endl;
    
    for(auto it=s.begin();it != s.end();it++)
    {
        cout << *it << endl;
    }
    return 0;
}