#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "Hello Mamunur Rushid";
    cout << s.size() << endl;
    for (auto it =s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
        
    }
    

    return 0;
}