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
};
bool com(Student a, Student b)
{
    if (a.eng_marks == b.eng_marks)
    {
        if (a.math_marks == b.math_marks)
        {
            return a.id < b.id; 
        }
        else
        {
            return a.math_marks > b.math_marks; 
        }
    }
    else
    {
        return a.eng_marks > b.eng_marks; 
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
    }

    sort(s, s + t, com);

    for (int i = 0; i < t; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].section << " " << s[i].id << " " << s[i].math_marks << " " << s[i].eng_marks << endl;
    }

    return 0;
}
