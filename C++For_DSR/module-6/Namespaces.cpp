#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;
namespace Joni
{
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
}
using namespace Joni;
int main()
{
    
    return 0;
}
