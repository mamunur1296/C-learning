#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
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
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==1 && i != j) {
                v.push_back({i,j});
            }
        }
    }
    for(auto c:v){
            cout  << c.first << c.second << " ";
        }
        cout  << endl;
    
    return 0;
}