#include <bits/stdc++.h>
#include <iostream>
#include <queue>
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
Node *input_level_Order()
{
    int v;
    cin >> v;
    Node *root;
    if (v == -1)
        root = NULL;
    else
        root = new Node(v);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left;
        Node *rite;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            rite = NULL;
        else
            rite = new Node(r);
        f->left = left;
        f->right = rite;
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

void print_left(Node * root)
{
    if(root==NULL) return;
    print_left(root->left);
    if(!root->left)print_left(root->right);
    cout << root->value << " ";
}
void print_right(Node * root)
{
    if(root==NULL) return;
    cout << root->value << " ";
    if(!root->right)print_right(root->left);
    print_right(root->right);
}

int main()
{
    Node *root = input_level_Order();
    print_left(root->left);
    cout << root->value << " ";
    print_right(root->right);
    return 0;
}
