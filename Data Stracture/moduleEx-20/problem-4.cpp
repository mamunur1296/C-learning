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

vector<int> print_lavel(Node *root, int x)
{
    vector<int> v;
    if (root == NULL)
        return v;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node *root = pr.first;
        int level = pr.second;
        q.pop();

        if (level == x)
            v.push_back(root->value);

        if (root->left)
            q.push({root->left, level + 1});
        if (root->right)
            q.push({root->right, level + 1});
    }

    return v;
}
int main()
{
    Node *root = input_level_Order();
    int x;
    cin >> x;
    vector<int> ans = print_lavel(root, x);
    if (ans.empty())
    {
        cout << "Invalid";
    }
    else
    {
        for (int val : ans)
        {
            cout << val << " ";
        }
    }

    return 0;
}