#include <bits/stdc++.h>
#include <iostream>
#include <queue>
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
Node* input_level_Order()
{
    int v;
    cin>>v;
    Node* root;
    if(v== -1) root=NULL;
    else root=new Node(v);
    queue<Node*>q;
    if(root)q.push(root);
    while(!q.empty())
    {
        Node* f=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node*left;
        Node*rite;
        if(l== -1) left=NULL;
        else left=new Node(l);
        if(r== -1) rite=NULL;
        else rite=new Node(r);
        f->left=left;
        f->right=rite;
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}
void print_Level(Node * root)
{
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        Node* f=q.front();
        q.pop();

        cout << f->value << " ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);  
    }
    
}
int main()
{
    Node * root=input_level_Order();
    print_Level(root);
    return 0;
}