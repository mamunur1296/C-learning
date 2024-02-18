#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <list>
using namespace std;
int main()
{
    map<string,int> mp;
    // insart
    // mp.insert({"mamun",100});
    // mp.insert({"suma",200});
    // mp.insert({"sadika",300});
    //or
    mp["mamun"]=100;
    mp["suma"]=200;
    // for(auto it=mp.begin();it != mp.end();it++)
    // {
    //     cout << it->first << " " << it->second<<endl;
    // }

    if(mp.count("mamun")){
        cout << mp["mamun"] << endl;
    }else{
        cout << "NO Data Available" << endl;
        
    }

    return 0;
}