#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Node
{
public:
    string value;
    Node *next;
    Node *prev;

    Node(string value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void input(Node *&head, Node *&tail, string v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
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
void handleQueries(Node *head)
{
    string command, address;
    Node *current = head;

    while (cin >> command)
    {
        if (command == "visit")
        {
            Node *temp = head;
            cin >> address;
            bool found = false;
            while (temp != NULL)
            {
                if (temp->value == address)
                {
                    found = true;
                    break;
                }
                temp = temp->next;
            }
            if (found)
            {
                current = temp;
                cout << current->value << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            if (current->next != NULL)
            {
                current = current->next;
                cout << current->value << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (current->prev != NULL)
            {
                current = current->prev;
                cout << current->value << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        string v;
        cin >> v;
        if (v == "end")
            break;
        input(head, tail, v);
    }
    handleQueries(head);
    return 0;
}

