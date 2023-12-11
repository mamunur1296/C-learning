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
void insart_at_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next; // this loop mack sure ,Node now Last node or taill
    }
    tmp->next = newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}
void insart_at_any_pogition(Node *head, int pog, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pog - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << endl
         << "Insart a new pogition " << pog << endl
         << endl;
}
void insart_at_Head_pogition(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << endl
         << "Insart a Head pogition " << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1 : Insart at tail" << endl;
        cout << "Option 2 : print link lest" << endl;
        cout << "Option 3 : Insart any pogition" << endl;
        cout << "Option 4 : Insart Head pogition" << endl;
        cout << "Option 5 : termenate" << endl;
        int optopn;
        cin >> optopn;
        if (optopn == 1)
        {
            int v;
            cin >> v;
            insart_at_tail(head, v);
        }
        else if (optopn == 2)
        {
            print_linked_list(head);
        }
        else if (optopn == 3)
        {
            int pog, v;
            cin >> pog >> v;
            if (pog == 0)
            {
                insart_at_Head_pogition(head, v);
            }
            else
            {
                insart_at_any_pogition(head, pog, v);
            }
        }
        else if (optopn == 4)
        {
            int v;
            cin >> v;
            insart_at_Head_pogition(head, v);
        }
        else if (optopn == 5)
        {
            break;
        }
    }

    return 0;
}