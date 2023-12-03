#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // stringstream ss(s); // this is method 1 ;
    stringstream ss;
    ss << s; // this is method 2
    string word;
    int count = 0;
    while (ss >> word)
    {
        cout << word << endl;
        count++;
    }
    cout << count << endl;
    return 0;
}
