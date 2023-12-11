#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    list<int>L={10,20,30,40,50};
    cout << L.max_size() << endl;
    L.resize(20,100);
    for(int v:L)
    {
        cout << v << " ";
        
    }
    
    return 0;
}