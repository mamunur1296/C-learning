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
void output(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
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

bool SametoSame(Node *head1, Node *head2)
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

int main()
{
    Node *head = NULL;
    Node *head1 = NULL;
    Node *tail = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        input(head, tail, v);
    }
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        input(head1, tail1, v);
    }
    if (SametoSame(head, head1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}