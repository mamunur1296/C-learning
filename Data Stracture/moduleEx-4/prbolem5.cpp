#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int k = 0; k < n / 2; k++)
    {
        for (int i = 0; i < k; i++)
        {
            cout << " ";
        }
        cout << "\\";
        for (int i = 0; i < (n - 2) - (2 * k); i++)
        {
            cout << " ";
        }
        cout << "/" << endl;
    }
    for (int i = 0; i < n / 2; i++)
    {
        cout << " ";
    }
    cout << "X" << endl;
    for (int k = n / 2 - 1; k >= 0; k--)
    {
        for (int i = 0; i < k; i++)
        {
            cout << " ";
        }
        cout << "/";
        for (int i = 0; i < (n - 2) - (2 * k); i++)
        {
            cout << " ";
        }
        cout << "\\" << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n / 2; i++) {
//         for (int j = 0; j < i; j++) {
//             cout << " ";
//         }
//         cout << "\\";
//         for (int j = 0; j < (n - 2) - (2 * i); j++) {
//             cout << " ";
//         }
//         cout << "/" << endl;
//     }

//     for (int i = 0; i < n / 2; i++) {
//         cout << " ";
//     }
//     cout << "X" << endl;
//     for (int i = n / 2 - 1; i >= 0; i--) {
//         for (int j = 0; j < i; j++) {
//             cout << " ";
//         }
//         cout << "/";
//         for (int j = 0; j < (n - 2) - (2 * i); j++) {
//             cout << " ";
//         }
//         cout << "\\" << endl;

//     }

//     return 0;
// }
