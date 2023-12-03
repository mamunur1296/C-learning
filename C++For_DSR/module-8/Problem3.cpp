#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
    int t;
    cin >> t;
    Student s[t];

    for (int i = 0; i < t; i++)
    {
        cin.ignore();
        cin >> s[i].name >> s[i].cls >> s[i].section >> s[i].id;
    }

    for (int i = 0; i < t - 1; i++)
    {
        for (int j = i + 1; j < t; j++)
        {
            if (i < j)
            {
                char tmp = s[i].section;
                s[i].section = s[j].section;
                s[j].section = tmp;
            }
        }
    }


    for (int i = 0; i < t; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].section << " " << s[i].id << endl;
    }

    return 0;
}
