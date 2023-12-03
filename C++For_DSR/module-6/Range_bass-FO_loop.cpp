#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    // method : 1
    //this is for loop . and .size() is provide count string element
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }
    // method : 2
    for (char c : s) // this is range bass for loop 
    {
        cout << c << endl;
    }
    return 0;
}
