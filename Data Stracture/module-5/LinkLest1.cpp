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
    Node a(10), b(20);
    a.next = &b;

    cout << a.value << endl;
    cout << (*a.next).value << endl; // long cart derafarance
    cout << a.next->value << endl;   // derafarance kora use kora jay ok

    return 0;
}