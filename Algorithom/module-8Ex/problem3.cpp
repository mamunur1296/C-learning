#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class edge
{
public:
    long long int u;
    long long int v;
    long long int w;
    edge(long long int u,long long int v, long long int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
int main()
{
    long long int n, e;
    cin >> n >> e;
    vector<edge> v;
    while (e--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        v.push_back(edge{a, b, c});
    }
    long long int dis[n];
    for (int i = 0; i <= n; i++)
    {
        dis[i] =LLONG_MAX;
    }
    long long int s;
    cin >> s;
    dis[s] = 0;
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        for (edge ed : v)
        {
            long long int u = ed.u;
            long long int v = ed.v;
            long long int w = ed.w;
            if (dis[u] < LLONG_MAX && dis[u] + w < dis[v])
            {
                
                dis[v] = dis[u] + w;
            }
        }
    }
    for (edge ed : v)
    {
        long long int u = ed.u;
        long long int v = ed.v;
        long long int w = ed.w;
        if (dis[u] < INT_MAX && dis[u] + w < dis[v])
        {
            
            flag = true;
            break;
            dis[v] = dis[u] + w;
        }
    }
    long long int x;
    cin >> x;
    while (x--)
    {
        long long int y;
        cin >> y;
        if (flag == true)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
        else
        {
            if (dis[y] == LLONG_MAX)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[y] << endl;
            }
        }
    }
    return 0;
}