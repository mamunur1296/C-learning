#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
const int n=1e5+5;
vector<int> v[n];
bool vig[n];
void dfs( int root){
    cout << root << endl;
    vig[root]=true;
    for (auto child:v[root]){
        if(!vig[child]) dfs(child);
    } 
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vig,false,sizeof(vig));
    dfs(0);
    return 0;
}