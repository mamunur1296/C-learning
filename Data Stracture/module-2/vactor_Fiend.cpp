#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 2, 7, 2};
    // vector<int>::iterator it;
    // it = find(v.begin(), v.end(), 2); // this is iterator methos . fiend pointer
    // or
    auto it = find(v.begin(), v.end(), 200);
    if(v.end()==it) { // if jodi valu khuje na pay tahola pointer lasta thake 
        cout << " NOT True" << endl;  
    }else{

    cout << *it << endl;
    }

    return 0;
}