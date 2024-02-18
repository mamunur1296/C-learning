#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool isEmpty(string& s) {
    stack<char> st;

    for (char ch : s) {
        if (!st.empty() && st.top() == '0' && ch == '1') {
            st.pop(); 
        } else {
            st.push(ch);
        }
    }

    return st.empty();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        if(isEmpty(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
