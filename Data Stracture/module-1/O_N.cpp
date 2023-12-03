#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n; // 1 staip
    cin>>n; // 1 staip
    int a[n]; // 1 staip
    for (int i = 0; i < n; i++) // o(n) staip
    {
        cin>>a[i];
    }
    int sum=0; // 1 staip
    for (int i = 0; i < n; i+=2) // o(n) staip
    {
        sum +=a[i];
    }
    cout << sum; // 1 staip
    
    return 0;
}
// this code complixcity is ==  O(n) 