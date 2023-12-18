#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

class myQueue
{
public:
    list<int> L;
    void push(int v)
    {
        L.push_back(v);
    }
    void pop()
    {
        L.pop_front();
    }
    int front()
    {
        return L.front();
    }
    bool empty()
    {
        return L.empty();
    }
    int size()
    {
        return size();
    }
};
int main()
{
    myQueue q;
    int v;

    while (cin >> v)
        q.push(v);
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}