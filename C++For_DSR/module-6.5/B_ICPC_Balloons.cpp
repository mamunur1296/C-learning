#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int m;
    cin >> m;
    cin.ignore();
    for (int i = 0; i < m; i++)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        int count = 0;
        int sum=0;
        for(int i=0;i<n;i++){
            cout << s[i] << endl;   
        }
        cout  << endl;
        
       
    }

    return 0;
}
