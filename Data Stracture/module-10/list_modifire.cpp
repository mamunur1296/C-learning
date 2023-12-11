#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    list<int>l={10,20,30};
    //list<int>nl;
    //nl=l; // sortcart assain .
    // long cart assain 
    //nl.assign(l.begin(),l.end()); // das not use 
    l.insert(next(l.begin(),2),100);
    for(int v:l)
    {
        cout << v << " "; 
    }
    return 0;
}