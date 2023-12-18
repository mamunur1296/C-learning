#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
class myStack
{
public:
    list<int> l;
    void push(int val)//O(1)
    {
        l.push_back(val);//O(1)
    }
    void pop()//O(1)
    {
        l.pop_back();//O(1)
    }
    int top()//O(1)
    {
        return l.back();//O(1)
    }
    int size()//O(1)
    {
        return l.size();//O(1)
    }
    bool empty() //O(1)
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    // st.push(10);
    // st.push(20);
    // cout << st.top() << endl;
    // st.pop();                // use this method are sengle value; 
    // cout << st.top() << endl;
    // st.pop();
    // if(!st.empty()) cout << st.top() << endl;
    //input another value ;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
        
    }
    return 0;
}