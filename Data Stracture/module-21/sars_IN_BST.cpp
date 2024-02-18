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
void print_Level(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->value << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
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

bool serch_Tree(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->value == x)
        return true;
    if (x < root->value)
        return serch_Tree(root->left,x);
    else
        return serch_Tree(root->right,x);
    return true;
}
int main()
{
    Node *root = input_level_Order();
    if (serch_Tree(root, 5))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}