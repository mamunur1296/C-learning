#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,1,4,5,6,7};
    cout << v[v.size()-1] << endl; // end value
    cout << v.back() << endl; // end value
    cout << v[0] << endl; // first value
    cout << v.front() << endl; // first value
    
    // vector<int>::iterator it; // this replass auto 
    for(auto it=v.begin();it<v.end();it++)
    {
        cout << *it << " ";
        
    }
    return 0;
}