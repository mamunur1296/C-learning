#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int arr[n];
    int mx=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(mx<arr[i]){
            mx=max(mx,arr[i]);
        }
    }
    
    cout<< mx;
    return 0;
}
