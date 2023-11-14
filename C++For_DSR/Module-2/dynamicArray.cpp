#include <bits/stdc++.h>
using namespace std;
int * funk() // mack dynamic array and return address 
{
    int *b = new int[5];  // create dynamic array  address . 
    for (int  i = 0; i < 5; i++) // input this array elements 
    {
        cin>>b[i];
    }
    return b;
}
int main()
{
    int *b = funk(); // receive dynamic  array address  
    for (int i = 0; i < 5; i++) // print this vakue
    {
        cout << b[i] << endl; 
    }
    return 0;
}