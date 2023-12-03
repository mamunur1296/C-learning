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
int main()
{
    Node *head = new Node(10); // this is store a object pointer
    Node *a = new Node(20); 
    Node *c = new Node(30);   // this is store a object pointer
    head->next = a;
    a->next = c;

    cout << head->value << endl;       // i access this pointer
    cout << a->value << endl;          // i access this pointer
    cout << head->next->value << endl; // i access this pointer
    cout << head->next->next->value << endl;
    
    return 0;
}