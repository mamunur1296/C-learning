#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int N=1e5+5;
int vigit[N];
int level[N];
vector<int> v[N];
void bfs(int src){
    queue<int> q;
    q.push(src);
    vigit[src]=true;
    level[src]=0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        
        for(auto chi : v[par]){
            if(vigit[chi] != true){
                 q.push(chi);
                 vigit[chi]=true;
                 level[chi] = level[par] + 1;
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
    for (int i = 0; i < n; i++)
    {
        cout << i << level[i] << endl;
        
    }
    return 0;
}