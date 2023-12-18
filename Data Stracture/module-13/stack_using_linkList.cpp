#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
class Node
    {
    public:
        int value;
        Node *next;
        Node *prev;
        Node(int value)
        {
            this->value = value;
            this->next = NULL;
            this->prev=NULL;
        }
    };
class myStack
{
public:
    Node * head=NULL;
    Node * tail=NULL;
    int sz;
    void push(int val)//O(1)
    {
        sz++;
        Node * new_node= new Node(val);
       if(head==NULL)
       {
            head=new_node;
            tail=new_node;
            return;
       } 
       tail->next=new_node;
       new_node->prev=tail;
       tail=tail->next;
    }
    void pop()//O(1)
    {
        sz--;
        Node * del=tail;
        tail=tail->prev;
        
        if(tail==NULL) head=NULL;
        else tail->next=NULL;
        delete del;
    }
    int top()//O(1)
    {
        return tail->value;
    }
    int size()//O(1)
    {
        return sz;
    }
    bool empty() //O(1)
    {
        if (sz == 0)
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
        cout << st.top() << endl;
        st.pop();
    }
    
    
    return 0;
}