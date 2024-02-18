#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string sentence;
        getline(cin, sentence);

        priority_queue<pair<int, string>> q;
        map<string, int> mp;
        stringstream ss(sentence);

        string word;
        int count = INT_MIN;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > count)
            {
                count = mp[word];
                q.push({mp[word], word});
            }
        }

        cout << q.top().second << " " << q.top().first << endl;
        q.pop();
    }

    return 0;
}
