
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        stack<char> s1,s2;
        string m;
        cin>>m;
        for(char c:m)
        {
            s1.push(c);
            if(s1.top()=='1')
            {
                s2.push(s1.top());
                s1.pop();
                if(!s1.empty()  && (s1.top()=='0'))
                {
                    s1.pop();
                    s2.pop();
                }
            }
        }
        if(s1.empty()) 
        {
            cout<<"YES"<<endl;
        }
        else if(!s1.empty()) 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}