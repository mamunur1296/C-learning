#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int frq[26] = {0};
    for (char c : s)
    {
        frq[c - 'a']++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        // count element 
        if(frq[i - 'a'] !=0)
        {
            cout << frq[i - 'a'] << endl;
        }
        //  sort later 
        // for (int j = 0; j < frq[i - 'a']; j++)
        // {
        //     cout << i;
        // }
    }
    return 0;
}