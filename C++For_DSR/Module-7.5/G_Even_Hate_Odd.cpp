#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        int arr[n];
        int even = 0;
        int odd = 0;
        int rajult = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n % 2 == 0)
        {

            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
                if (even == odd)
                {
                    rajult = 0;
                }else
                {
                    
                    if(even < odd){
                        rajult= abs(n/2-even);
                    }else{
                        rajult = abs(odd - n/2);
                    }
                }
                
            }
        }
        else
        {
            rajult = -1;
        }
        cout << rajult << endl;
    }

    return 0;
}