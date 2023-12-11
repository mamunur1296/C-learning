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
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->value != head2->value)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return size(head1) == size(head2);
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        input_value(head1, tail1, v);
    }

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        input_value(head2, tail2, v);
    }

    if (are_sizes_equal(head1, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}