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
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void input(Node *&head, Node *&tail, int v)
{
    Node *Nnode = new Node(v);
    if (head == NULL)
    {
        head = Nnode;
        tail = Nnode;
        return;
    }
    tail->next = Nnode;
    Nnode->prev = tail;
    tail = Nnode;
}
void print_Next(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}
void print_prev(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->value << " ";
        tail = tail->prev;
    }
    cout << endl;
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
void ascending(Node *head)
{
    while (head != NULL)
    {
        for (Node *i = head; i != NULL; i = i->next)
        {
            if (head->value > i->value)
            {
                swap(head->value, i->value);
            }
        }
        head = head->next;
    }
}
void dscending(Node *head)
{
    while (head != NULL)
    {
        for (Node *i = head; i != NULL; i = i->next)
        {
            if (head->value < i->value)
            {
                swap(head->value, i->value);
            }
        }
        head = head->next;
    }
}
bool isSame(Node *head1, Node *head2)
{
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->value != head2->value)
            return false;
        head1 = head1->next;
        head2 = head2->next;
    }
    return size(head1) == size(head2);
}
void revers_two_pointer(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->value, j->value);
        i = i->next;
        j = j->prev;
    }
    swap(i->value, j->value);
}
bool isPalindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        if (i->value != j->value)
            return false;
        i = i->next;
        j = j->prev;
    }
    if (i->value != j->value)
        return false;
}
void insart_pogition(Node *&head, Node *&tail, int v, int p)
{
    Node *Nnode = new Node(v);

    if (head == NULL)
    {
        head = Nnode;
        tail = Nnode;
        return;
    }
    else if (p == 0)
    {
        Nnode->next = head;
        Nnode->next->prev = Nnode;
        head = Nnode;
    }
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        while (t--)
        {
            int p, v;
            cin >> p >> v;
            insart_pogition(head, tail, v, p);
        }
        print_Next(head);
        print_prev(tail);
    }
    return 0;
}