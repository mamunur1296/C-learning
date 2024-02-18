#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    queue<string> q;

    while (t--) {
        int number;
        cin >> number;

        if (number == 0) {
            string name;
            cin >> name;
            q.push(name);
        } else if (number == 1) {
            if (!q.empty()) {
                cout << q.front() << endl;
                q.pop();
            } else {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
