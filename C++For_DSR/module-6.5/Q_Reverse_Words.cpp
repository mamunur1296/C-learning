#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int i = 0;  // Add a semicolon here

    while (ss >> word)
    {
        reverse(word.begin(), word.end());

        if (i == 0)
        {
            cout << word;
            i = 1;
        }
        else
        {
            cout << " " << word;
        }
    }

    return 0;
}


/*
while (ss >> word)
    {
        for (int i = word.size() - 1; i >= 0; i--)
        {
            cout << word[i];
        }
        if (ss.rdbuf()->in_avail() != 0) {
            cout << " ";
        }
    }


*/