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
void print(Node * head)
{
    
    while (head !=NULL)
    {
        cout << head->value << " ";
        head=head->next;  
    }
    
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
    // cunnect all and mack a lest 
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    print(head);
    return 0;
}