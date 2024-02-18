#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main(int argc, char const *argv[])
{
    long long int n, e;
    cin >> n >> e;
    long long int arr[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            arr[i][j] = 1e18;
            if (i == j)
            {
                arr[i][j] = 0;
            }
        }
    }
    while (e--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        if (c < arr[a][b])
        {
            arr[a][b] = c;
        }
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (arr[i][k] + arr[k][j] < arr[i][j])
                {
                    arr[i][j] = arr[i][k] + arr[k][j];
                }
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int n, m;
        cin >> n >> m;
        if (arr[n][m] != 1e18)
        {
            cout << arr[n][m] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}