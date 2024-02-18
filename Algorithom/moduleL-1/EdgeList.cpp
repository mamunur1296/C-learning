#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>> v;
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
       
    }
    for(auto chi:v){
        cout << chi.first << chi.second << " "; 
    }
    
    return 0;
}