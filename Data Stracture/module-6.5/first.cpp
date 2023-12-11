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
void inputList(Node *&head,int v)
{
    Node* newN=new Node(v);
    if(head==NULL){
        head=newN;
        return;
    }
    Node * tmp=head;
    while (tmp->next !=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newN;
}
void print(Node* head)
{
    int count = 0;
    while (head !=NULL)
    {
        // cout << head->value << " ";
        head=head->next;
        count++;
    } 
    cout << count << endl;
}
int main()
{
    Node *head=NULL;
    while (true)
    {
        int v;
        cin>>v;
        if(v==-1) break;
        inputList(head,v);
    }
    print(head);
    return 0;
}