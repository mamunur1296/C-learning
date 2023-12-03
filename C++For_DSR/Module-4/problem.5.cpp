#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int k = 0; k < t; k++)
    {
        int n,s;
        cin>>n>>s;
        int arr[n];
        int sayYes=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                for (int l = j+1; l < n; l++)
                {
                    if(arr[i]+arr[j]+arr[l]==s){
                        sayYes=1;
                    }
                }
                
            }
            
        }
        if(sayYes){
            cout << "YES" << endl; 
        }else{
            cout << "NO" << endl; 
        }
        
        
    }
    
    return 0;
}