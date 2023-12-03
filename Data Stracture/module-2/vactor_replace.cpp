#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 2, 7, 2};
    replace(v.begin(), v.end()-1, 2, 200);
    for (int n : v)
    {
        cout << n << " ";
    }
    return 0;
}