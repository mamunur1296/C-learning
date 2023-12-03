#include <bits/stdc++.h>
using namespace std;
class Student  // mack groop class 
{
public:
    char Name[100];
    int Roll;
    double Cgpa;
};
int main()
{
    Student Mamun, Roshid;
    // char Name[100]="Mamun";
    // strcpy(Mamun.Name,Name);
    // Mamun.Roll=20;
    // Mamun.Cgpa=3.25;
    // cout<< " "<< Name <<" "<<  Mamun.Roll <<" "<<  Mamun.Cgpa;

    // mack input in this home
    // cin >> Mamun.Name >> Mamun.Roll >> Mamun.Cgpa; // input neya hoy
    // cin >> Roshid.Name >> Roshid.Roll >> Roshid.Cgpa;
    // cout << Mamun.Name << " " << Mamun.Roll << " " << Mamun.Cgpa << endl;
    // cout << Roshid.Name << " " << Roshid.Roll << " " << Roshid.Cgpa << endl;


    // multi line String input 
    cin.getline(Mamun.Name , 100); // multiline input 
    cin >> Mamun.Roll >> Mamun.Cgpa; 
    getchar(); // egnore inter 
    cin.getline(Roshid.Name,100);
    cin >> Roshid.Roll >> Roshid.Cgpa;
    cout << Mamun.Name << " " << Mamun.Roll << " " << Mamun.Cgpa << endl;
    cout << Roshid.Name << " " << Roshid.Roll << " " << Roshid.Cgpa << endl;
    return 0;
}