#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < q; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (j >= n1-- && j <= n2--)
            {
                sum += a[j];
                cout << a[j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}