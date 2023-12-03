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

// use function and mack dynamic object 
Student * fun()
{
    Student *Khan = new Student(500,11);
    return Khan;
}
int main()
{
    Student Korim(200,9); // this is static or variable type object 
    Student * Rorim = new Student(100,10); // this is daynamic type Object ; 
    cout << Korim.Cls << " "<< Korim.Roll << endl;
    cout << Rorim->Cls << " "<< Rorim->Roll << endl; // this is Rorim->Roll pointer sortcart 
    
    // accept Studen for function . 
    Student *ans = fun();
    cout << ans->Cls << " "<< ans->Roll << endl;
    delete ans; // we knoe c++ can not delete refarance  so manualy delete it . 
    cout << ans->Cls << " "<< ans->Roll << endl;
    return 0;
}