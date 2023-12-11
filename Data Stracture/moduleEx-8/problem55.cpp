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
void output_value(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

void removeDuplicate(Node *head)
{
    vector<int> fre(10001, 0);
    Node *tmp = head;
    Node *duplicate = NULL;
    while (tmp != NULL)
    {

        if (fre[tmp->value] > 0)
        {
            duplicate->next = tmp->next;
            delete tmp;
            tmp = duplicate->next;
        }
        else
        {
            fre[tmp->value]++;
            duplicate = tmp;
            tmp = tmp->next;
        }
    }
}

void removeD(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        for (Node *i = tmp->next; i != NULL; i = i->next)
        {
            if (i->value == tmp->value)
            {
                Node *duplicate = i;
                tmp->next = i->next;
                delete duplicate;
            }else
            {
                tmp=i;
            }
            
        }
       
        

        
        tmp = tmp->next;
    }
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
    removeD(head);
     output_value(head);
    return 0;
}
