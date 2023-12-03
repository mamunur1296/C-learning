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
    int math_marks;
    int eng_marks;
    int total ;
};
bool com(Student a, Student b)
{
    if (a.total == b.total)
    {
        return a.id < b.id;
    }
    else
    {
        return a.total > b.total;
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
        cin >> s[i].name >> s[i].cls >> s[i].section >> s[i].id >> s[i].math_marks >> s[i].eng_marks;
        s[i].total = s[i].math_marks + s[i].eng_marks;
    }

    sort(s, s + t, com);

    for (int i = 0; i < t; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].section << " " << s[i].id << " " << s[i].math_marks << " " << s[i].eng_marks << endl;
    }

    return 0;
}
