#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>

using namespace std;

void printList(list<int> L)
{
    for (int v : L)
    {
        cout << v << " ";
    }
    cout << endl;
}

int main()
{
    list<int> L;
    int v;
    while ((cin >> v) )
    {
        if (v == -1)
            break;
        L.push_back(v);
    }
    L.sort();
    L.unique();
    printList(L);
    return 0;
}
