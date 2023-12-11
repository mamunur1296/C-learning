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
void insart(Node * &head,int p , int v)
{
    Node * newN=new Node(v);
    Node * tmp=head;
    if(head == NULL)
    {
        head=newN;
        return;
    }
    
    for (int i = 0; i < p-1; i++)
    {
        tmp=tmp->next;
    }
    newN->next=tmp->next;
    tmp->next=newN;
    
}
void insart_Head(Node* &head,int p,int v)
{
    Node * newN=new Node(v);
    newN->next=head;
    head=newN;
}
void print(Node * head)
{
    
    while (head !=NULL)
    {
        cout << head->value << " ";
        head=head->next;  
    }
    
}
int size(Node * head)
{
    Node * tmp=head;
    int count=0;
    while (tmp !=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
void insart_tail(Node * head,Node * tail,int v)
{
    Node * newNode=new Node(v);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
int main()
{
   // thoise are like head,a,b,etc is pointer of same node 
    Node * head=new Node(10);
    Node * a=new Node(20);
    Node * b=new Node(30);
    Node * c=new Node(40);
    Node * d=new Node(50);
    Node * e=new Node(60);
    Node *tail=e;
    // cunnect all and mack a lest 
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    
    int p,v;
    cin>>p>>v;
    if(p>size(head))
    {
        cout << "invalid index" << endl;
        
    } else if (p==0)
    {
        insart_Head(head,p,v);
    }else if (p==size(head))
    {
        insart_tail(head,tail,v)
    }
    
    else{
        insart(head,p,v);
    }
    
    print(head);
    cout << size(head) << endl;
    
    
    return 0;
}