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
void input_value(Node *&head, Node *&tail, int v)
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
void output_value(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}
int size(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}
bool are_sizes_equal(Node *head1, Node *head2)
{
    return size(head1) == size(head2);
}
void revers_(Node * head)
{
    if(head ==NULL) return;
    revers_(head->next);
    cout << head->value << " "; 
}
void print_middle(Node * head)
{

    if(size(head)%2==0)
    {
        for (int i = 1; i <= size(head)/2; i++)
        {
            head=head->next;
        }
        cout << head->value << " " << head->next->value <<  endl;  
    }else{
        for (int i = 1; i <= size(head)/2; i++)
        {
            head=head->next;
        }
        cout << head->value <<  endl;  
    }
}
int max_value(Node * head )
{
    int max=INT_MIN;
    while (head !=NULL)
    {
        if(max<head->value) max=head->value;
        head=head->next;
    }
    return max;
}
int min_value(Node * head )
{
    int min=INT_MAX;
    while (head !=NULL)
    {
        if(min>head->value) min=head->value;
        head=head->next;
    }
    return min;
}
void sort_Desending(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value < j->value) swap(i->value, j->value);
        }
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
        input_value(head, tail, v);
    }
    output_value(head);
    size(head);
    are_sizes_equal();
    revers_(head);
    print_middle(head);
    max_value(head);
    min_value(head);
    sort_Desending(head);
    return 0;
}