#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //  i <= sqrt(n)
    // or i*i<=n 
    for (int i = 1; i*i<=n ; i++) // O(sqrt(N)) complex:
    {
        if(n%i==0)
        {
            cout << i << " ";
            if(n/i != i) cout << n/i << endl;  
        }
    }
    
    return 0;
}