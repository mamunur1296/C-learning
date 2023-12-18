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
    Node * prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev= NULL;
    }
};
class myQueue
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int si=0;
    void push(int v)
    {
        si++;
        Node* nNode=new Node(v);
        if(head==NULL)
        {
            head=nNode;
            tail=nNode;
            return;
        }
        tail->next=nNode;
        nNode->prev=tail;
        tail=tail->next;
    }
    void pop()
    {
        si--;
        Node* del=head;
        head=head->next;
        delete del;
        if(head==NULL)
        {
            tail=NULL;
            return;
        }
        head->prev=NULL;

        
    }
    int front()
    {
        return head->value;
    }
    bool empty()
    {
        if(si==0) return true;
        else return false;
    }
    int size()
    {
        return si;
    }

};
int main()
{
    myQueue q;
    int v;

    while (cin>>v) q.push(v);
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}