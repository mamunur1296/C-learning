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
void delete_lest(Node *head, int p)
{
    Node *tmp = head;
    for (int i = 0; i < p - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void print(Node *head)
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
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void delete_head(Node *&head)
{
    Node *tmp = head;
    head = head->next;
    delete tmp;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    int p;
    cin >> p;
    print(head);
    if (p >= size(head))
    {
        cout << "Invalid index" << endl;
    }
    else if (p == 0)
    {
        delete_head(head);
    }
    else
    {
        delete_lest(head, p);
    }
    print(head);
    return 0;
}