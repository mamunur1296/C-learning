#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;
class Parsone
{
public:
    string Name;
    int Age;
    int Number1;
    int Number2;
    Parsone(string Name, int Age, int Number1, int Number2)
    {
        this->Name = Name; // this is a same object pointer 
        this->Age = Age;
        this->Number1 = Number1;
        this->Number2 = Number2;
    }
    void Display()
    {
        cout << "Name : " << Name << endl;
        cout << "Age : " << Age << endl;
    }
    int AddNumber()
    {
        return Number1 + Number2;
    }
};

int main()
{
    Parsone Mamun(" Mamunur Rushid ", 25 , 100,90);
    // cout << Mamun.Name << " " << Mamun.Age<< endl;
    Mamun.Display();
    int rejult = Mamun.AddNumber();
    cout << rejult << endl;
    return 0;
}
