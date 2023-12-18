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
bool isPalindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        if (i->value != j->value)
            return false;
        i = i->next;
        j = j->prev;
    }
    if (i->value != j->value)
        return false;

    return true;
}
void input(Node *&head, Node *&tail, int v)
{
    Node *Nnode = new Node(v);
    if (head == NULL)
    {
        head = Nnode;
        tail = Nnode;
        return;
    }
    tail->next = Nnode;
    Nnode->prev = tail;
    tail = Nnode;
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if(v==-1) break;
        input(head, tail, v);
    }
    bool pal= isPalindrome(head,tail);
    if(pal)
    {
        cout << "YES" << endl;
        
    }else{
        cout << "NO" << endl;
    }


    return 0;
}