#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    stack<int> st;
    queue<int> q1;
    
    int n;
    cin >> n;
    while (n--)
    {
        int v;
        cin >> v;
        q.push(v);
    }
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q1.push(st.top());
        st.pop();
    }
    while (!q1.empty())
    {
        cout << q1.front() << " ";
        q1.pop();
    }
    

    return 0;
}
