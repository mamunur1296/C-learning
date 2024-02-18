#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>> v; // this is stl pair 
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    //1st appross
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << v[i].second << endl;
    }
    cout  << endl;
    // segend appross
    for(pair<int,int> c:v){
        cout << c.first << c.second << endl;
    }
    // 3rd appross
    for(auto c:v){
        cout << c.first << c.second << endl;
    }
    return 0;
}