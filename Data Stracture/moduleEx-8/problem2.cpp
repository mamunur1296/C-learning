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

int findIndex(Node *head, int x)
{
    int index = 0;
    while (head != NULL)
    {
        if (head->value == x)
        {
            return index;
        }
        head = head->next;
        index++;
    }
    return -1;
}
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        Node *head = NULL;
        Node *tail = NULL;
        while (true)
        {
            int v;
            cin >> v;
            if (v == -1)
                break;
            input_value(head, tail, v);
        }
        int x;
        cin >> x;
        int result = findIndex(head, x);
        cout << result << endl;
    }

    return 0;
}