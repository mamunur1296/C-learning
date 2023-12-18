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
void print_Next(Node *head, string c)
{
    cout << c << " -> ";
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}
void print_prev(Node *tail, string c)
{
    cout << c << " -> ";
    while (tail != NULL)
    {
        cout << tail->value << " ";
        tail = tail->prev;
    }
    cout << endl;
}
void insertIndex(Node *&head, Node *&tail, int index, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL && index == 0)
    {
        head = newNode;
        tail = newNode;
    }
    else if (index == 0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    else
    {
        Node *current = head;
        for (int i = 0; i < index - 1; ++i)
        {
            if (current == NULL)
            {
                cout << "Invalid" << endl;
                return;
            }
            current = current->next;
        }

        if (current == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }

        newNode->next = current->next;
        if (current->next != NULL)
        {
            current->next->prev = newNode;
        }
        newNode->prev = current;
        current->next = newNode;

        if (newNode->next == NULL)
        {
            tail = newNode;
        }
    }
    print_Next(head, "L");
    print_prev(tail, "R");
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;
    while (t--)
    {
        int p, v;
        cin >> p >> v;
        insertIndex(head, tail, p, v);
    }
    return 0;
}