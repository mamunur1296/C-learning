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
bool cmp(Student a, Student b)
{
    // NB: we know that issu lsat compair are unick it . ok 
    // roll and marks sort 
     if(a.marks==b.marks)  // this is sortcart . method 
     {
        return a.roll < b.roll;
     }
     else
     {
        return a.marks > b.marks;
     }
    // if(a.marks > b.marks) // details method 
    // {
    //     return true;
    // }
    // else if(a.marks < b.marks)
    // {
    //     return false;
    // }
    // else 
    // {
    //     // if(a.roll < b.roll)  // details 
    //     // {
    //     //     return true;
    //     // }
    //     // else
    //     // {
    //     //     return false;
    //     // }
    //     return a.roll < b.roll;
    // }
    // if (a.marks >= b.marks)  // details 
    //     return true;
    // else
    //     return false;
   // return a.marks>=b.marks;  // soirt cart from  
}
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
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << " " << endl;
    }

    return 0;
}
