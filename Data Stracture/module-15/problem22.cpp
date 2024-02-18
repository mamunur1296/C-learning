#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    stack<int> st;
    queue<int> Q;

    int n1;
    cin >> n1;
    while (n1--)
    {
        int v;
        cin >> v;
        st.push(v);
    }
    int n2;
    cin >> n2;
    while (n2--)
    {
        int v2;
        cin >> v2;
        Q.push(v2);
    }
    bool flag = false;
    if (st.size() == Q.size())
    {
        while (!st.empty() && !Q.empty())
        {
            if (st.top() == Q.front())
            {
                flag = true;
            }else{
                flag=false;
            }
            st.pop();
            Q.pop();
        }
    }
    
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
