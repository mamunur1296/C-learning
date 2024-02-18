#include <bits/stdc++.h>
#include <iostream>
#include <queue>

using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> q;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    int t;
    cin>>t;
    while(t--){
        int c;
        cin>>c;
        if(c== 0){
            int v;
            cin>>v;
            q.push(v);
            if(!q.empty()){
                cout << q.top() << endl;
            }else{
                cout << "Empty" << endl;
            }
            
        }else if(c==1){
            if(!q.empty()){
                cout << q.top() << endl;
            }else{
                cout << "Empty" << endl;
            }
        }else if(c==2){
            if (!q.empty()) {
                q.pop();
                if (!q.empty()) {
                    cout << q.top() << endl;
                } else {
                    cout << "Empty" << endl;
                }
            } else {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}