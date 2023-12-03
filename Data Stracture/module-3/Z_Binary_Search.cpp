#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++) // O(n) bad
    {
        cin >> a[i];                    
    }
    sort(a, a + n); //O(n lgo n) bad

    while (q--) //O(n)
    {
        int x;            // total O(n log n)  ok nelam
        cin >> x;
        int l = 0, r = n - 1;
        bool flag = false;
        while (l <= r) // O(log n)
        {
            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                flag = true;
                break;
            }
            if (x > a[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (flag)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}
/*


// totla complex city O(n + n lgo n + n lgo n)
                        n = small so out 
                        n log n or n log n = i gat one 
                        SO  total O(n log n)


*/
/*
in this catch , complexcity O(n*q)
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for (int i = 0; i < n ; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    while (q--)
    {
        int x;
        cin>>x;
        int flag=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==x){
                flag=1;
                break;
            }
        }
        if(flag){
            cout << "found" << endl;
        }else{
            cout << "not found" << endl;
        }

    }


    return 0;
}



*/
