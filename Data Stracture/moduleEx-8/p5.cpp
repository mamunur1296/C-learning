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
void input(Node *&head, Node *&tail, int v)
{
    Node *nNode = new Node(v);
    if (head == NULL)
    {
        head = nNode;
        tail = nNode;
        return;
    }
    tail->next = nNode;
    tail = nNode;
}
void removeDuplucate(Node * head)
{
    Node * tmp=head;
    Node * dup=NULL;
    vector<int> fre(10001,0);
    while (tmp !=NULL)
    {
        if(fre[tmp->value]>0)
        {
            dup->next=tmp->next;
            delete tmp;
            tmp=dup->next;
        }else
        {
            fre[tmp->value]++;
            dup=tmp;
            tmp=tmp->next;
        }
        
    }
    
}
void output(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        input(head, tail, v);
    }
    removeDuplucate(head);
    output(head);
    return 0;
}