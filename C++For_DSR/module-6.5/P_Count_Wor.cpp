#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);

    string word;
    int count = 0;

    while (ss >> word)
    {
        for(char c:word){
            if(isalpha(c)){
                count ++ ;
                break;
            }
        }
        
    }

    cout << count << endl;
    return 0;
}

