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
int main()
{
    Node * head=new Node(10);
    Node * a=new Node(20);
    Node * b=new Node(30);
    Node * c=new Node(40);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=a;
    Node * slow=head;
    Node * fast=head;
    bool flag=false;
    while (fast != NULL && fast->next !=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast == slow)
        {
            flag=true;
            break;
        }
    }
    if(flag)cout << "Cycle" << endl;
    else cout << "No Cycle" << endl;
    return 0;
}