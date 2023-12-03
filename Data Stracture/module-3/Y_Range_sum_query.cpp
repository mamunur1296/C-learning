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
        long long sum = 0;
        for (int j = n1-1; j <=n2-1; j++)
        {
                sum += a[j];
                
        }
        cout << sum << endl;
    }

    return 0;
}