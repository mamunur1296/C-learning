#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // totola com: O(n * log(n ))
    for (int i = 1; i <= n; i++) //P(N)
    {
        int x=i;
        while (x>0) // O(log(n))
        {
            int digit = x % 10;
            cout << digit << " ";
            x/=10; 
        }
        cout  << endl;
        
    }
    
    return 0;
}