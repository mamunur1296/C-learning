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
void revers_(Node *head)
{
    if (head == NULL)
        return;
    revers_(head->next);
    cout << head->value << " ";
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
void print_middle(Node *head)
{

    if (size(head) % 2 == 0)
    {
        for (int i = 1; i <= size(head) / 2; i++)
        {
            head = head->next;
        }
        cout << head->value << " " << head->next->value << endl;
    }
    else
    {
        for (int i = 1; i <= size(head) / 2; i++)
        {
            head = head->next;
        }
        cout << head->value << endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        input_value(head, tail, v);
    }
    print_middle(head);
    return 0;
}