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
        this->prev = NULL;
    }
};
class my_Stack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int v)
    {
        sz++;
        Node *Nnode = new Node(v);
        if (head == NULL)
        {
            head = Nnode;
            tail = Nnode;
            return;
        }
        tail->next = Nnode;
        Nnode->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *del = tail;
        tail = tail->prev;
        if (tail == NULL)
            head = NULL;
        else
            tail->next = NULL;
        delete del;
    }
    int top()
    {
        return tail->value;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
    int size()
    {
        return sz;
    }
};
int main()
{
    my_Stack st1;
    my_Stack st2;
    int n;
    cin >> n;
    while (n--)
    {
        int v;
        cin >> v;
        st1.push(v);
    }
    int n2;
    cin >> n2;
    while (n2--)
    {
        int v2;
        cin >> v2;
        st2.push(v2);
    }
    if(st1.size() != st2.size())
    {
        cout << "NO" << endl;
    }else {
        bool flag=false;
        while (!st1.empty() && !st2.empty())
        {
            if(st1.top() == st2.top())
            {
                flag=true;
            } else{
                flag=false;
            }
            st1.pop();
            st2.pop();
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
        
        
    }
    return 0;
}