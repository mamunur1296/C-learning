#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    int v;

    while (cin >> v)
        q.push(v);
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}