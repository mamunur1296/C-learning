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
bool com(Student a, Student b)
{
    if (a.marks == b.marks)
    {
        return a.roll < b.roll;
    }
    else
    {
        return a.marks > b.marks;
    }
}
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
    sort(s, s + t, com);
    for (int i = 0; i < t; i++)
    {
        cout << s[i].name << " " << s[i].roll << " " << s[i].marks << endl;
    }

    return 0;
}