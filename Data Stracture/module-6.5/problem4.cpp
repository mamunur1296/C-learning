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
void addAnyPosition(Node *&head, int p, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    if (p == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        for (int i = 1; i <= p - 1; i++)
        {

            if (tmp == NULL)
            {
                cout << "Invalid" << endl;
                return;
            }
            tmp = tmp->next;
        }
        if (tmp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
    output(head);
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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int p, val;
        cin >> p >> val;
        addAnyPosition(head, p, val);
       
    }
    return 0;
}