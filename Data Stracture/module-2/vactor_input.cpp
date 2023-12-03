#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // 1st method of input vactor 
    // vector<int> v;
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // 2nd method     
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for(int val:v)
    {
        cout << val << ' ';
        
    } 
    return 0;
}