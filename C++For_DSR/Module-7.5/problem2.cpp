#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int t;
    cin >> t;
    Student s[t];
    for (int i = 0; i < t; i++)
    {
        cin.ignore();
        cin >> s[i].name >> s[i].roll >> s[i].marks;
    }

    for (int i = t-1; i >= 0; i--)
    {
        cout << s[i].name << " " << s[i].roll << " " << s[i].marks << endl;
    }
    return 0;
}