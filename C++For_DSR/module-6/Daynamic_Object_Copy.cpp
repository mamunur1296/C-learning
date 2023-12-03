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
    Parsone(string Name, int Age)
    {
        this->Name = Name; // this is a same object pointer
        this->Age = Age;
    }
};
int main()
{
    Parsone *Mamun = new Parsone("Mamunur Rushid", 25); // those are dynamic object
    Parsone *Roshid = new Parsone("Rushid Khan", 26);
    //Mamun=Roshid; // this way are not ok . becose delete Roshid this not work . 
    //Mamun->Name = Roshid->Name // this is valid way . but this are so complax.
    *Mamun = *Roshid; // this way are valid and good practice . ok  
    delete Roshid;
    cout << Mamun->Name << endl;
    return 0;
}
