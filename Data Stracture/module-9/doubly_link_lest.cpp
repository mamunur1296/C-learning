#include <bits/stdc++.h>
#include <iostream>
#include <vector>
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
void print_next(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}
void print_prev(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->value << " ";
        tail = tail->prev;
    }
}
int size(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
void insart_any_position(Node *head, int v, int p)
{
    Node *Nnode = new Node(v);
    Node *tmp = head;
    for (int i = 0; i < p - 1; i++)
    {
        tmp = tmp->next;
    }
    Nnode->next = tmp->next;
    tmp->next = Nnode;
    Nnode->next->prev = Nnode;
    Nnode->prev = tmp;
    cout << tmp->value << endl;
}
void insart_head(Node *&head,Node *&tail, int v)
{
    Node *tmp = head;
    Node *Nnode = new Node(v);
    if (head == NULL)
    {
        head = Nnode;
        tail= Nnode;
        return;
    }
    Nnode->next = tmp;
    tmp->prev = Nnode;
    head = Nnode;
}
void insart_tail(Node *&head,Node * &tail,int v)
{
    Node * Nnode=new Node(v);
    if(tail==NULL)
    {
        head=Nnode;
        tail=Nnode;
        return;
    }
    tail->next=Nnode;
    Nnode->prev=tail;
    tail=Nnode;
}
void deleteNode(Node * head,int p)
{
    Node * del=NULL;
    Node * tmp=head;
    for (int i = 0; i < p-1 ; i++)
    {
        tmp=tmp->next;
    }
    del=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete del;
}
void deletetail(Node *& tail)
{
    Node * del=tail;
    tail=tail->prev;
    tail->next=NULL;
    delete del;
}
void deleteHead(Node *& head)
{
    Node * del=head;
    head=head->next;
    head->prev=NULL;
    delete del;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    
    while (true)
    {
        int v;
        cin>>v;
        if(v== -1) break;
        insart_tail(head,tail,v);
    }
    print_next(head);
    print_prev(tail);
    // if(p==0)
    // {
    //     insart_head(head,tail,v);
    // }else if(p == size(head))
    // {
    //     insart_tail(head,tail,v);
    // }else if(p>=size(head))
    // {
    //     cout << "invalide" << endl;
    // }
    // else
    // {
    //     insart_any_position(head,v,p);
    // }
    //deleteNode(head,p);
  
    //deletetail(tail);
    
    // if(p>=size(head))
    // {
    //     cout << "invalide" << endl;
    // }
    // else if(p==0)
    // {
    //     deleteHead(head);
    // }
    // else if(p==(size(head)-1))
    // {
    //     deletetail(tail);
    // }
    // else
    // {
    //     deleteNode(head,p);
    // }


    return 0;
}