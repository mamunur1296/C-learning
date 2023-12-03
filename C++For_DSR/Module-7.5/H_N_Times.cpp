#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void funk(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        cout << c << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        char c;
        cin >> c;
        funk(n, c);
        cout << endl;
    }

    return 0;
}