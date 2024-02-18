#include <bits/stdc++.h>
#include <iostream>
#include <vector>
 #include <queue>
using namespace std;
int main()
{
    priority_queue<int> mxq;
    priority_queue<int,vector<int>,greater<int>> miq;
    while(true)
    {
        int c;
        cin>>c;
        if(c==0){
            int v;
            cin>>v;
            miq.push(v);    
        }else if(c==1)
        {
            miq.pop();
        }else if(c==2)
        {
            cout << pq.top() << endl;
        }else{
            break;
        } 
    }
    
    return 0;
}