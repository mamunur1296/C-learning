#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Frq
{
public:
    char value;
    int count;
};
bool cmp(Frq a, Frq b)
{
    if(a.count==b.count)
    {
        return a.value < b.value;
    }else{
        return a.count > b.count;
    }
}
int main()
{
    string s;
    cin >> s;
    Frq f[26];
    for (int i = 0; i < 26; i++)
    {
        f[i].value = char(i + 'a');
        f[i].count = 0;
    }
    for (char c : s)
    {
        int scii = int(c - 'a');
        f[scii].count++;
    }
    sort(f, f + 26, cmp);
    for (int i = 0; i < 26; i++)
    {
        if (f[i].count != 0)
        {
            for (int j = 0; j < f[i].count; j++)
            {
                cout << f[i].value;
            }
        }
    }
    return 0;
}