#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;
void print(string & s) // this is  refarance {&} type parameter . 
{
    s="would";
}
int main()
{
    string s="Hello";
    print(s);
    cout << s << endl; // this string can not change 
    return 0;
}
