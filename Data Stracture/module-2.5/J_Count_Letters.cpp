#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> fre(26, 0);
    for (char c : s) {
        fre[c - 'a']++;
    }
    for (char letter = 'a'; letter <= 'z'; letter++) {
        if (fre[letter - 'a'] > 0) {
            cout << letter << " : " << fre[letter - 'a'] << endl;
        }
    }

    return 0;
}


/**
 *
 * #include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        cin >> s;
        int frq[26] = {0};
        int ans = 0;
        for (char c : s)
        {
            frq[c - 'A']++;
        }
        for (char i = 'A'; i <= 'Z'; i++)
        {
            if (frq[i - 'A'] != 0)
            {
                ans += frq[i - 'A'] + 1;
            }
        }

        cout << ans << endl;

    }
    return 0;
}
*/