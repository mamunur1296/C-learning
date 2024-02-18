#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    long long inf[n][e];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            inf[i][j] = INT_MAX;
            if (i == j)
                inf[i][j] = 0;
        }
    }
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        inf[a][b] = c;
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (inf[i][k] + inf[k][j] < inf[i][j])
                {
                    inf[i][j] = inf[i][k] + inf[k][j];
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << inf[i][j] << " ";

        }
        cout  << endl;

    }
    return 0;
}