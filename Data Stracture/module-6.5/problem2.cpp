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
void input(Node *&head, int v)
{
    Node *newN = new Node(v);
    if (head == NULL)
    {
        head = newN;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newN;
}
void output(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}
void counting(Node *head)
{
    vector<int> fre(100, 0);
    Node *tmp = head;
    while (tmp != NULL)
    {
        fre[tmp->value]++;
        tmp = tmp->next;
    }
    // for (int i = 0; i < fre.size(); i++) {
    //     if (fre[i] > 0) {
    //         cout << "Value: " << i << ", Frequency: " << fre[i] << endl;
    //     }
    // }
    int flag = 0;
    for (int i = 0; i < fre.size(); i++)
    {
        if (fre[i] >= 2)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        input(head, v);
    }
    //output(head);
    counting(head);
    return 0;
}