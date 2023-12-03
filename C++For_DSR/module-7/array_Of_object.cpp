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
    Student *a= new Student[n]; // dynamic array . 

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin,a[i].name);
        cin >>a[i].roll>>a[i].marks;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " "<< a[i].roll << endl; 
    }

    return 0;
}
