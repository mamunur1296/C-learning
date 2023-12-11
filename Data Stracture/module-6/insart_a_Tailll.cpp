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
void insart_at_tail(Node *head,int value)
{
    Node *newNode =new Node(value);
    Node * tmp=head;
    while (tmp->next != NULL)
    {
        tmp =tmp->next; // this loop mack sure ,Node now Last node or taill
    }
    tmp->next= newNode;
    
}
void print_linked_list(Node * head)
{
    Node * tmp=head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp=tmp->next;
    }
    
}
int main()
{
    Node *head = NULL;
    cout << "Option 1 : Insart at tail" << endl;
    int optopn;
    cin>>optopn;
    if(optopn == 1)
    {
        int v;
        cin>>v;
        insart_at_tail(head,v);
    }
    print_linked_list(head);
    return 0;
}