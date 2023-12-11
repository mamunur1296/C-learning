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
int max_value(Node *head)
{
    int max = INT_MIN;
    while (head != NULL)
    {
        if (max < head->value)
            max = head->value;
        head = head->next;
    }
    return max;
}
int min_value(Node *head)
{
    int min = INT_MAX;
    while (head != NULL)
    {
        if (min > head->value)
            min = head->value;
        head = head->next;
    }
    return min;
}
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
int main()
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
    int difference = max_value(head) - min_value(head);
    cout << difference << endl;
    
    return 0;
}