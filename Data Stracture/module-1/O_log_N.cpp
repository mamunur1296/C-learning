#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n>0) // O(logN) Complexicity
    {
        int digit=n/10;
        cout <<digit << endl;
        n/=10;
    }
    
    return 0;
}