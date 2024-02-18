#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int N=1e5+5;
vector<int> v[N];
int vigit[N];
int level[N];
int parant[N];
void bfs_SPath(int src){
    queue<int> q;
    q.push(src);
    level[src]=0;
    vigit[src]=true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for(auto chi:v[par]){
            if(vigit[chi] != true){
                q.push(chi);
                vigit[chi]=true;
                level[chi]= level[par]+1;
                parant[chi]=par;
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
    int src ,des;
    cin>>src>>des;
    memset(parant,-1,sizeof(parant));
    bfs_SPath(src);
    int x=des; // mack des
    vector<int> path;
    while(x != -1){
        path.push_back(x);
        x=parant[x];
    }
    reverse(path.begin(),path.end()); 
    for(auto x:path)cout << x << endl;
    return 0;
}