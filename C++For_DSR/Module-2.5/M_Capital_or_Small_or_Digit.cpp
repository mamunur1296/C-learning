#include <iostream>
using namespace std;
int main()
{
    char a;
    cin>> a;
    if(int(a)>='0' && int(a)<='9'){
        cout << "IS DIGIT" << endl;  
    }else if (int(a)>='a' && int(a)<='z')
    {
        cout << "ALPHA" << endl;  
        cout << "IS SMALL" << endl;  
    }else if (int(a)>='A' && int(a)<='Z')
    {
        cout << "ALPHA" << endl;  
        cout << "IS CAPITAL" << endl;  
    }
    
    return 0;
}