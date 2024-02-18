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
        return serch_Tree(root->left, x);
    else
        return serch_Tree(root->right, x);
    return true;
}
void insert(Node*& root, int v)
{
    Node *newNode = new Node(v);
    if (root == NULL){
        root = newNode;
        return;
    }
    if (v < root->value)
        insert(root->left, v);
    else
        insert(root->right, v);
}

// void insert(Node*& root, int v) {
//     Node *newNode = new Node(v);

//     if (root == NULL) { // Base case: empty tree
//         root = newNode;
//         return;
//     }
        

//     if (v < root->value) {
//         insert(root->left, v); // Recursively insert in left subtree
//     } else {
//         insert(root->right, v); // Recursively insert in right subtree
//     }
// }
Node * convart(int arr[] , int l,int r)
{
    if(l>r) return NULL;
    int mid=(l+r)/2;
    Node* root=new Node(arr[mid]);
    Node* left=convart(arr,l,mid-1);
    Node* right=convart(arr,mid+1,r);
    root->left=left;
    root->right=right;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    Node *root = convart(arr,0,n-1);
    print_Level(root);

    return 0;
}