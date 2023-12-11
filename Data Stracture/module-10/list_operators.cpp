#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    list<int>L={10,50,10,60,30,20,40};
    // L.remove(10); // remove all speciek value.
    // L.sort();
    L.sort(greater<int>());
    L.unique(); // delete duplucate value
    L.reverse();
    cout << L.front() << endl;
    cout << L.back() << endl;
    cout << *next(L.begin(),3) << endl; //  this is back etarator value 
    
    for(int v:L)
    {
        cout << v << " ";  
    }
    return 0;
}