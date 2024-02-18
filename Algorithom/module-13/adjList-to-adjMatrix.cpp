#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;


void convart(int n,vector<int> adj[]){
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] =0;
            if(i==j) mat[i][j]=1  ;
        } 
        
    }
    for (int i = 0; i < n; i++)
    {
        for(auto c: adj[i]){
            mat[i][c]=1;
        }  
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";   
        } 
        cout  << endl;
    }
    
}
int main()
{

    int n,e;
    cin>>n>>e;
    vector<int> adj[n];
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    convart(n,adj);
    return 0;
}