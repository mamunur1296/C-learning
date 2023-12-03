#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>> a[i];
    }
    // use  sort() function and print assending and desending ordert 
   // sort(a,a+n); // first contain bass pointer a . and last pointer a+n . and assending order . 
    sort(a,a+n , greater<int>()); // greater<int>() this is a bilding compair function . and desending order 
    for (int  i = 0; i < n; i++)
    {
        cout<< a[i] << " ";
    }
    
    
    return 0;
}