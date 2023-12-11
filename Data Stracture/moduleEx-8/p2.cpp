#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void input(Node *&head,Node *&tail , int v)
{
    Node * nNode =new Node(v);
    if(head == NULL)
    {
        head=nNode;
        tail=nNode;
        return;
    }
    tail->next=nNode;
    tail=nNode;
}
void output(Node * head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head=head->next;
    }
    cout  << endl;   
}
int isAkjest(Node * head , int x)
{
    int index=0;
    while (head !=NULL)
    {
        if(head->value==x) return index;
        head=head->next;
        index++;
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        Node * head=NULL;
        Node * tail=NULL;
        while (true)
        {
            int v;
            cin>>v;
            if(v==-1) break;
            input(head,tail,v);
        }
        int index;
        cin>>index;
       int rajult= isAkjest(head,index);
       cout << rajult << endl;
       
    }
    
    
    return 0;
}