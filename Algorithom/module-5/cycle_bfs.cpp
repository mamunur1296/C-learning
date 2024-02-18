#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int le = 1e5 + 5;
bool vig[le];
vector<int> arr[le];
int parr[le];
bool ans;
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vig[s] = true;
    while (!q.empty())
    {
        int paran = q.front();
        q.pop();
        cout << paran << endl;
        
        for (auto c : arr[paran])
        {
            // Cycle functions 
            if(vig[c]&&parr[paran]!=c){
                 ans=true;
            }
            if (!vig[c])
            {
                q.push(c);
                vig[c] = true;
                parr[c]=paran;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    memset(vig,false,sizeof(vig));
    memset(parr,-1,sizeof(parr));
    ans=false;
    for (int i = 0; i < n; i++)
    {
        if(!vig[i]){
            bfs(i);
        }
    }
    if(ans) cout << "OK" << endl;
    else cout << "NO" << endl;
    return 0;
}