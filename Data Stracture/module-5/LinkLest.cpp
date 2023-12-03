#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
class Node 
{
    public:
    int value;
    Node * next; 
};
int main()
{
     Node a,b;
     a.value=10;
     b.value=20;

     a.next=&b;
     b.next=NULL;
     cout << a.value << endl;
     cout << (*a.next).value << endl; // long cart derafarance 
     cout << a.next->value << endl; // derafarance kora use kora jay ok 

    return 0;
}