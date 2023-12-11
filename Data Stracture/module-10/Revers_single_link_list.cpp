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
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void print(Node * head)
{
    while (head !=NULL)
    {
        cout << head->value << " ";
        head=head->next;
    }
    
}
void print_revars(Node * head)
{
    if(head == NULL) return;
    print_revars(head->next);
    cout << head->value << " ";
}
void revars_singli_list(Node *& head,Node * cur)
{
    if(cur->next==NULL)
    {
        head=cur;
        return;
    }
    revars_singli_list(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}
int main()
{
    Node * head=new Node(10);
    Node * a=new Node(50);
    Node * b=new Node(30);
    head->next=a;
    a->next=b;
    revars_singli_list(head,head);
    print(head);
    return 0;
}