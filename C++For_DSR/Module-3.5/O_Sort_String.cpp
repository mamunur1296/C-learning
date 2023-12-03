#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ch;
    int freq[26] = {0};
    while (cin >> ch)
        freq[ch - 'a']++;
    for (int i = 0; i < 26; ++i)
    {
        if (freq[i] > 0)
        {
            int run = freq[i];
            char ch = i + 'a';
            for (int i = 0; i < run; ++i)
                cout << ch;
        }
    }
    return 0;
}