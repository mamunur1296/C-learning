#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    // this is 1 way 
    //stringstream ss(s); // Use std::stringstream for word-by-word grouping
    
    // this is 2nd way 
    stringstream ss;
    ss<<s;
    string word;
    while (ss >> word) 
    {
        cout << word << endl;
    }

    return 0;
}
