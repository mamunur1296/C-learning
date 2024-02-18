#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node* prev;
    Node(int value) {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack {
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz=0;

    void push(int val) {
        sz++;
        Node* new_node = new Node(val);
        if (head == NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = tail->next;
    }

    void pop() {
        sz--;
        Node* del = tail;
        tail = tail->prev;

        if (tail == NULL)
            head = NULL;
        else
            tail->next = NULL;
        delete del;
    }

    int top() {
        return tail->value;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return sz == 0;
    }
};

class myQueue {
public:
    Node* head = NULL;
    Node* tail = NULL;
    int si = 0;

    void push(int v) {
        si++;
        Node* nNode = new Node(v);
        if (head == NULL) {
            head = nNode;
            tail = nNode;
            return;
        }
        tail->next = nNode;
        tail = tail->next;
    }

    void pop() {
        si--;
        Node* del = head;
        head = head->next;
        delete del;
        if (head == NULL)
            tail = NULL;
    }

    int front() {
        return head->value;
    }

    bool empty() {
        return si == 0;
    }

    int size() {
        return si;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    myStack st;
    myQueue q;

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < m; ++i) {
        int val;
        cin >> val;
        q.push(val);
    }

    while (!st.empty() && !q.empty()) {
        if (st.top() == q.front()) {
            st.pop();
            q.pop();
        } else {
            cout << "NO" << endl;
            return false;
        }
    }

    if ( st.empty() && q.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
