#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    string sentens;
    getline(cin,sentens);
    string words;
    stringstream ss(sentens);
    map<string,int> mp;
    while (ss>>words)
    {
        mp[words]++;  
    }

    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << mp["and"] << endl;
    

    return 0;
}