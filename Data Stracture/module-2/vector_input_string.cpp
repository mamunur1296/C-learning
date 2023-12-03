#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // 1st method not space
    //  int n;
    //  cin>>n;
    //  vector<string> s(n);
    //  for (int i = 0; i < n; i++)
    //  {
    //      cin>>s[i];
    //  }
    //  for(string val:s)
    //  {
    //      cout << val << " ";

    // }
    // for espace
    // int n;
    // cin >> n;
    // cin.ignore();
    // vector<string> s(n);
    // for (int i = 0; i < n; i++)
    // {
    //     getline(cin,s[i]);
    // }
    // for (string val : s)
    // {
    //     cout << val << endl;
    // }

    // 2nd method

    // int n;
    // cin >> n;
    // vector<string> s;
    // for (int i = 0; i < n; i++)
    // {
    //     string x;
    //     cin >> x;
    //     s.push_back(x);
    // }
    // for (string val : s)
    // {
    //     cout << val << " ";
    // }

    // for espace

    int n;
    cin >> n;
    cin.ignore();
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        string x;
        getline(cin,x);
        s.push_back(x);
    }
    for (string val : s)
    {
        cout << val << endl;
    }

    return 0;
}