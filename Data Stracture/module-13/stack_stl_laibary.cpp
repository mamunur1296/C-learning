#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    int v;
    while (cin>>v)
    {
       st.push(v) ;
    }
    cout << st.top() << endl;
    return 0;
} 