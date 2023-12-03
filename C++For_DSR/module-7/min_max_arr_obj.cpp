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
    int n;
    cin >> n;

    //Student a[n]; // static array
    Student *a = new Student[n]; // dynamic array .

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    Student min;
    min.marks = INT_MAX;
    Student max;
    max.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < min.marks)
        {
            min = a[i];
        }
        if (a[i].marks > max.marks)
        {
            max = a[i];
        }
    }

    cout << min.name << endl;
    cout << max.name << endl;

    return 0;
}
