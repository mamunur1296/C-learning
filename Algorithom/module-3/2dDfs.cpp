#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
int m,n;
const int nn=20;
char c[nn][nn];
int isTravers[nn][nn];
vector<pair<int,int>> d ={{0,1},{0,-1},{-1,0},{1,0}};
bool isValis(int i,int j){
    if((i<0 || i>=m || j<0 || j>=n )) return false;
    return true;
}
void dfs2d(int si,int sj){
    cout << si << sj <<  endl;
    isTravers[si][sj]=true;
    for (int i = 0; i < 4; i++)
    {
        int c1=si+d[i].first;
        int c2=sj+d[i].second;
        if(isValis(c1,c2) && !isTravers[c1][c2]){
            dfs2d(c1,c2);
        }
    }
    
}
int main()
{
    
    cin>>m>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>c[i][j];
        }  
    }
    int si ,sj;
    cin>>si>>sj;
    memset(isTravers,false,sizeof(isTravers));
    dfs2d(si,sj);
    
    return 0;
}