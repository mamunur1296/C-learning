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
void removeDuplicate(Node *head)
{
    vector<int> fre(10001, 0);
    Node *tmp = head;
    Node * newNode=NULL;
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        newNode=i->next;
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if(newNode.va)
            
        }
    }

    
    
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
    removeDuplicate(head);
    // output_value(head);
    return 0;
}


// if (fre[tmp->value] > 0)
        // {
        //     newNode->next = tmp->next;
        //     delete tmp;
        //     tmp = newNode->next;
        // }
        // else
        // {
        //     fre[tmp->value]++;
        //     newNode = tmp;
        //     tmp = tmp->next;
        // }


    //      while (tmp != NULL)
    // {
    //     fre[tmp->value]++;
    //     tmp = tmp->next;  
    // }
    // for (int i = 0; i < fre.size(); i++)
    // {
    //     if(fre[i] !=0){
    //         cout << i  << " ";
    //     }
    // }