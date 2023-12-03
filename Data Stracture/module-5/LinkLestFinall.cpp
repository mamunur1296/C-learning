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
    Node * head= new Node(10);
    Node * a= new Node(20);
    Node * b= new Node(30);
    Node * c= new Node(40);
    Node * d= new Node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    // while (head != NULL)  // i use heade and print all value 
    // {
    //     cout << head->value << endl;
    //     head=head->next;   
    // }
    // while (head != NULL)  // this is not print value becose first cass head == null so we lost this heade 
    // {
    //     cout << head->value << endl;
    //     head=head->next;   
    // }
    
    // so solve this issu . 
    
    Node *tamp = head; // we assaom this head tamp . and head save 
    while (tamp != NULL) // then run loop and print all value . 
    {
        cout << tamp->value << endl;
        tamp = tamp->next;
    }
    tamp = head; // first catch we lost tamp data  . thats hoy we assain head again . 
    while (tamp != NULL) // then we run and mack print again 
    {
        cout << tamp->value << endl;
        tamp = tamp->next;
    }
    
    return 0;
}

/*
Node *tamp = head;
    while (tamp != NULL)
    {
        cout << tamp->value << endl;
        tamp = tamp->next;
    }
    tamp = head;
    while (tamp != NULL)
    {
        cout << tamp->value << endl;
        tamp = tamp->next;
    }
*/