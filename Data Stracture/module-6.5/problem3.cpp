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
void medallElement(Node *head, int count)
{
    Node *tmp = head;
    if (count % 2 == 0)
    {
        for (int i = 0; i <= count / 2 - 2; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->value << " ";
        cout << tmp->next->value << endl;
    }
    else
    {
        for (int i = 0; i <= count / 2-1 ; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->value << endl;
    }
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
    int co = count(head);
    medallElement(head, co);

    return 0;
}