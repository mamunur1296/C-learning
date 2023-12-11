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
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void output(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}
int size(Node * head)
{
    int count=0;
    while (head==NULL)
    {
        count++;
    }
    return count;
}
int  max_value(Node * head)
{
    int min=INT_MIN;
    while (head !=NULL)
    {
        if(min<head->value) min=head->value;
        head=head->next;
    }
    return min;
}
int  min_value(Node * head)
{
    int max=INT_MAX;
    while (head !=NULL)
    {
        if(max>head->value) max=head->value;
        head=head->next;
    }
    return max;
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
    int rajult = max_value(head)-min_value(head);
    cout << rajult << endl;
    return 0;
}