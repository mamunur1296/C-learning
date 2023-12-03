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

    // Student a[n]; // static array
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
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].marks < a[j].marks)
            {
                swap(a[i], a[j]);
            }
            if (a[i].marks == a[j].marks)
            {
                if (a[i].roll > a[j].roll)
                {
                    swap(a[i], a[j]);
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << a[i].roll << a[i].marks << endl;
    }

    return 0;
}
