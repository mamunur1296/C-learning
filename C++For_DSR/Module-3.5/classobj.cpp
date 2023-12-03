#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    char section[10];
    int math_marks;
    int cls;

    // Constructor to initialize the object
    Student(const char *name, int roll, const char *section, int math_marks, int cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        strcpy(this->section, section);
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    // Creating an object of the Student class
    Student Rohim("Rohim", 101, "A", 100, 10);
    Student kohim("kohim", 102, "A", 90, 10);
    Student Johim("Johim", 103, "A", 70, 10);

    // Accessing and printing the object's attributes
    if(Rohim.math_marks > kohim.math_marks && Rohim.math_marks > Johim.math_marks){
        cout << Rohim.name << endl;  
    }else if (kohim.math_marks > Rohim.math_marks && kohim.math_marks > Johim.math_marks)
    {
        cout << kohim.name << endl;  
    }else if (Johim.math_marks > Rohim.math_marks && Johim.math_marks > kohim.math_marks)
    {
        cout << Johim.name << endl;  
    }
    return 0;
}
