#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int le = 1e5 + 1;
vector<int> iv[le];
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        iv[a].push_back(b);
        iv[b].push_back(a);
    }

    int Q;
    cin >> Q;
    cout << iv[Q].size() << endl;
    return 0;
}