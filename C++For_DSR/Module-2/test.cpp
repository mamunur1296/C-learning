#include <bits/stdc++.h>
using namespace std;
int *funk()
{
    int *a = new int;  // this is daynamic variable 
    cout  << "Fun " << a << endl;
    
    *a = 100;
    return a;
}
int main()
{
    int *p =funk();
    cout  << "mun " << p << endl;

    int m = 100;  // this is static variable
    int *n = new int; // this are dynamic variable .
    *n = 100;
    return 0;
}