#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n]; // contain Nodes
    while (e--) //  input Nodes 
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    // 1st approse output
    for (int x : mat[0])
    {
        cout << x << " ";
    }
    cout << endl;

    // 2nd appross output
    for (int i = 0; i < mat[0].size(); i++)
    {
        cout << mat[0][i] << " ";
    }
    cout << endl;
    // see all node output
    for (int i = 0; i < 5; i++)
    {
        for (int x : mat[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}