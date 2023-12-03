#include <bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    int Roll;
    int Clas;
    double Gpa;
    Student(int Roll, int Clas, double Gpa)
    {
        this->Roll=Roll;  // this is a belding pointer . this carry to same class refarance . 
        (*this).Clas=Clas; // (*this) this is actual pointer . 
        this->Gpa=Gpa; //  this-> it is sortcart for (*this)  . this is not a sintex 
    } 
};
int main()
{
    // mack object of instans weidout constructore 
    // Student Rohim;  
    // Rohim.Roll=25;
    // Rohim.Clas=10;
    // Rohim.Gpa=2.50;
    // Student Korim;
    // Korim.Roll=55;
    // Korim.Clas=9;
    // Korim.Gpa=3.50;

    // mack object of instans With constructore 
    Student Rohim(25,9,5.00);
    Student Kohim(29,10,4.00);
    cout << Rohim.Roll << " "<< Rohim.Clas << " " << Rohim.Gpa << endl;
    cout << Kohim.Roll << " "<< Kohim.Clas << " " << Kohim.Gpa << endl;
    
    return 0;
}