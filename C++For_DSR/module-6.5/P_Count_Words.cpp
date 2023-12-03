#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    bool isWord=false;
    int count =0;
    for(char c:s){
        if(isalpha(c)){
            if(isWord==false) count ++;
            isWord= true;
        }else{
            isWord=false;
        }
    }

    cout << count << endl;
    return 0;
}
