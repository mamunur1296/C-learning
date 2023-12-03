#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    //v.erase(v.begin()+1);
    //v.erase(v.begin()+1,v.end()-1);
    //v.erase(v.begin()+1,v.begin()+4);
    for(int n:v){
        cout << n << " "; 
    }
    return 0;
}