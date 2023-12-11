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
void input(Node *&head, int v)
{
    Node *newN = new Node(v);
    if (head == NULL)
    {
        head = newN;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newN;
}
void output(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int count(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        count++;
    }
    return count;
}
void isAscending(Node *head, int count)
{
    Node *tmp = head;
    int f = 0;
    for (int i = 0; i < count - 1; i++)
    {
        if (tmp->value < tmp->next->value)
            f = 1;
        else
            f = 0;
        tmp = tmp->next;
    }
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        input(head, v);
    }
    int c = count(head);
    isAscending(head, c);
    return 0;
}