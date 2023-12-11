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
void print_Recursion(Node * head)
{
    if(head==NULL) return;
    print_Recursion(head->next);
    cout << head->value << " ";
}
int main()
{
     Node * head=new Node(10);
    Node * a=new Node(20);
    Node * b=new Node(30);
    Node * c=new Node(40);
    Node * d=new Node(50);
    Node * e=new Node(60);

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    print_Recursion(head);
    return 0;
}