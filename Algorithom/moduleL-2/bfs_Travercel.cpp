#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int N=1e5+5;
int vigit[N];
vector<int> v[N];
void bfs(int src){
    queue<int> q;
    q.push(src);
    vigit[src]=true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        cout << par << " ";
        
        for(auto chi : v[par]){
            if(vigit[chi] != true){
                 q.push(chi);
                 vigit[chi]=true;
            }
           
        }
    }
    
}
int main()
{
    int n,e;
    cin>>n>>e;
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin>>src;

    bfs(src);
    
    return 0;
}