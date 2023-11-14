#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    // Allocate memory for array a
    int *a = new int[n];

    // Read values for array a
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Copy elements from a to b
    int *b = new int[n];
    for (int i = 0; i < n; i++) {
        b[i] = a[i];
    }

    // Deallocate memory for array a
    delete[] a;

    cin >> m;

    // Resize array b to accommodate both original elements and additional elements
    int *temp = new int[n + m];
    for (int i = 0; i < n; i++) {
        temp[i] = b[i];
    }

    // Deallocate memory for array b
    delete[] b;

    b = temp;

    // Read additional values for array b
    for (int i = n; i < n + m; i++) {
        cin >> b[i];
    }

    // Print the combined array
    for (int i = 0; i < n+m ; i++) {
        cout << b[i] << " ";
    }

    // Deallocate memory for array b
    delete[] b;

    return 0;
}

