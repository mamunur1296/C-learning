#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int Roll;
    int Cls;
    Student(int Roll, int Cls)
    {
        this->Roll = Roll;
        this->Cls = Cls;
    }
};

Student fun() // this function return Studemt type  data .like int , void ETC 
{
    Student Rohim(100,9); //this is variable type object and instant  or static type .
    return Rohim;
}

int main()
{
    Student rej=fun();
    cout << rej.Roll << " " << rej.Cls << endl;
    
    return 0;
}