#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};
void print_post(Node * root)
{
    if(root==NULL) return;
    print_post(root->left);
    print_post(root->right);
    cout << root->value << " ";
}
int main()
{
    Node * root=new Node(10);
    Node * a=new Node(20);
    Node * b=new Node(30);
    Node * c=new Node(40);
    Node * d=new Node(50);
    Node * e=new Node(60);
    Node * f=new Node(70);
    Node * g=new Node(80);
    Node * h=new Node(90);
    Node * i=new Node(100);
    //connect
    root->left=a;
    root->right=b;
    a->left=c;
    a->right=h;
    c->right=e;
    h->right=i;
    b->right=d;
    d->left=f;
    d->right=g;
    print_post(root);
    return 0;
}