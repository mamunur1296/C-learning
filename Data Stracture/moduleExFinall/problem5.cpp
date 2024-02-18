#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if(a.marks == b.marks){
           return a.roll >= b.roll;
        }
        return a.marks <= b.marks;
        
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> q;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        q.push(obj);
        
    }
    int t;
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            q.push(obj);
            if(!q.empty()){
                cout << q.top().name << " " << q.top().roll << " " << q.top().marks << endl;
            }else{
                cout << "Empty" << endl;
            }
        }
        else if (c == 1)
        {
             if(!q.empty()){
                cout << q.top().name << " " << q.top().roll << " " << q.top().marks << endl;
            }else{
                cout << "Empty" << endl;
            }
        }
        else if (c == 2)
        {
           if (!q.empty()) {
                q.pop();
                if (!q.empty()) {
                     cout << q.top().name << " " << q.top().roll << " " << q.top().marks << endl;
                } else {
                    cout << "Empty" << endl;
                }
            } else {
                cout << "Empty" << endl;
            }
        }

    }
    return 0;
}