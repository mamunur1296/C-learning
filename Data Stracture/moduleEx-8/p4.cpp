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
void insartHead(Node *&head, int v)
{
    Node *nNode = new Node(v);
    nNode->next=head;
    head=nNode;
}
void input_Head(Node * &head, int v)
{
    Node * nNode =new Node(v);
    if(head == NULL)
    {
        head=nNode;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=nNode; 
}
void output(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout  << endl; 
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
void deletevalue(Node * &head,int x)
{
    Node * tmp = head;
    Node * del = NULL;
    if(head==NULL && x==0)
    {
        return;
    }
    if(x>size(head))
    {
        return;
    }
    if(x==0){
        del=head;
        head=tmp->next;
        delete del;
    }
    for (int i = 0;tmp != NULL && i < x-1; i++)
    {
        tmp=tmp->next;
    }
    if (tmp == NULL || tmp->next == NULL)
    {
        return;
    }
    del=tmp->next;
    tmp->next=tmp->next->next;
    delete del;
    
}
int main()
{
    int t;
    cin >> t;
    Node *head = NULL;
    Node * tail=NULL;
    for (int i = 0; i < t; i++)
    {
        int n, v;
        cin >> n >> v;
        if (n == 0){
            insartHead(head, v);
        }if(n==1){
            input_Head(head,v);
        }if(n==2){
            deletevalue(head,v);
        }   
        output(head);
    }

    return 0;
}