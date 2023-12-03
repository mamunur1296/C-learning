#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    // v.insert(v.begin(), 10); // v.begin() is a pointer
    // vector<int> v1 = {100, 200, 300, 400};
    // v.insert(v.begin()+1,v1.begin(),v1.end()); // insart other vector 
    v.insert(v.begin()+2, 10);
    for (int n : v)
    {
        cout << n << " ";
    }

    return 0;
}