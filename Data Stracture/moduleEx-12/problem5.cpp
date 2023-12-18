#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>

using namespace std;

void printList( list<int> l, string c) {
    cout << c << " -> ";
    for ( int v : l) {
        cout << v << " ";
    }
    cout << endl;
}


int main() {
    int t;
    cin >> t;

    list<int> L;

    while (t--) {
        int x, v;
        cin >> x >> v;
        if(x==0)
        {
            L.push_front(v);
        }else if(x==1)
        {
            L.push_back(v);
        }else if(x==2)
        {
            int si=L.size();
            if (v < si && v >= 0) {
                 auto it = next(L.begin(), v);
                L.erase(it);
            } 
        }
        
        printList(L, "L");
        L.reverse();
        printList(L, "R");
        L.reverse();
    }

    return 0;
}
