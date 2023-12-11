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

void input_last_Item_To_Tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void print_single_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}

int main()
{
    int val;
    Node *head = NULL;
    int count = 0;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        input_last_Item_To_Tail(head, val);
        count++;
    }
   // print_single_list(head);
   cout << count << endl; 
    return 0;
}
