#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int lag = 1;

        for (int i = 0; i < n - 1; i++) {  
            if (arr[i] > arr[i + 1]) {
                lag = 0;
                break;  
            }
        }

        if (lag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
