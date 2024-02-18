#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

class edge
{
public:
    int u, v, c;
    edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    };
};

vector<edge> EdgeList;
const int le = 1e5 + 5;
int dis[le];

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        EdgeList.push_back(edge(a, b, c));
    }

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (auto es : EdgeList)
        {
            int u, v, c;
            u = es.u;
            v = es.v;
            c = es.c;
            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    bool cycle = false;
    for (auto es : EdgeList)
    {
        int u, v, c;
        u = es.u;
        v = es.v;
        c = es.c;
        if (dis[u] < INT_MAX && dis[u] + c < dis[v])
        {
            cycle=true;
            break;
        }
    }
    if(cycle) cout << "YEs" << endl;
    
    return 0;
}
