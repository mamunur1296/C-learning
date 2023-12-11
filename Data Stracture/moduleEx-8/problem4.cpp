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

void inputHead(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void inputTail(Node *& head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteAtIndex(Node *&head, int index)
{
    if (head == NULL)
    {
        return;
    }

    if (index == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *temp = head;
    for (int i = 0; temp != NULL && i < index - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
    {
        return;
    }

    Node *deletedNode = temp->next;
    temp->next = temp->next->next;
    delete deletedNode;
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

int main()
{
    int t;
    cin >> t;

    Node *head = NULL;

    for (int i = 0; i < t; i++)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            inputHead(head, v);
        }
        else if (x == 1)
        {
            inputTail(head, v);
        }
        else if (x == 2)
        {
            deleteAtIndex(head, v);
        }

        output_value(head);
    }

    return 0;
}
