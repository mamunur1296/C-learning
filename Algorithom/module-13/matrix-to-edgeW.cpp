#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
class edge{
    public:
    int u,v,w;
    edge(int u,int v,int w){
        this->u=u;
        this->v=v;
        this->w=w;
    }
};
int main()
{
    int n;
    cin>>n;
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> mat[i][j];
        }
    }
    vector<edge> v;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]>0) {
                v.push_back(edge(i,j,mat[i][j]));
            }
        }
    }
    for(auto c:v){
        cout  << c.u << c.v << c.w << " ";
    }
        
    
    return 0;
}