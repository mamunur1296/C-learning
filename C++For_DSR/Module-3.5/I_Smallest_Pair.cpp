#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int k = 0; k < n; k++)
    {
        int m;
        cin >> m;
        int arr[m];
        int sml = INT_MAX;
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < m - 1; i++)
        {
            for (int j = i + 1; j < m; j++)
            {
                sml = min(sml, arr[i] + arr[j] + j - i);
            }
        }
        cout << sml << endl;
    }

    return 0;
}