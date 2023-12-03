#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    // cout << v.max_size() << endl;
    // cout << "capacity :" << v.capacity() << endl;
    // v.push_back(10);
    // cout << "capacity :" << v.capacity() << endl;
    // v.push_back(20);
    // cout << "capacity :" << v.capacity() << endl;
    // v.push_back(10); // this vactor mack capacity 2x size
    // cout << "capacity :" << v.capacity() << endl;
    //cout << v.empty() << endl; // mack this function this vactor amply or not 

    v.push_back(10);
    v.push_back(20);
    v.push_back(10);
    v.resize(2); // this function delete other value and mack new array 
    v.resize(7,10); // mack new vactor and assain new value 10 all new number ;
    //v.clear(); // this function clear this value but not delete parmanently
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    //cout << v[1] << endl; // this prove that clear function are not delete value

    return 0;
}